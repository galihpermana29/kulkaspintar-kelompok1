#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void tampilkanMenu();
int masukkanBarangKeKulkas();
int cekKualitasBarang();
int cekPenyimpanan();
int tampilkanPesanan();
int memilih();
int tampilkanIsiKulkas(int total, int id);
void tampilkanPenyimpanan();


int jumlahSayuran[18];
string namaSayuran[18];
int totalSayuran = 0;


int jumlahDaging[18];
string namaDaging[18];
int totalDaging = 0;


int jumlahTelur[18];
string namaTelur[18];
int totalTelur = 0;


int jumlahMinuman[18];
string namaMinuman[18];
int totalMinuman = 0;


int jumlahMakanan[18];
string namaMakanan[18];
int totalMakanan = 0;


int jumlahLain[18];
string namaLain[18];
int totalLain = 0;


int penyimpanan = 100;
int sisa;
int levelSayur = 3, levelDaging = 2, levelTelur = 1, levelMinuman = 2, levelMakanan = 3, levelLain = 5;
void tampilkanMenu() {
	cout<<"\n==================================== MENU ====================================\n";
	cout << "\nIni merupakan kulkas pintar dengan fitur-fitur sebagai berikut : " << endl;
	cout << "1. Input barang ke kulkas" << endl;
	cout << "2. Cek kualitas barang yang ada di dalam kulkas (busuk/tidak)" << endl;
	cout << "3. Cek kapasitas penyimpanan kulkas" << endl;
	cout << "4. Tutup kulkas" << endl;

	cout << endl;
	cout << "User tinggal memasukkan 1/2/3/4 untuk setiap fitur kulkas yang ada" << endl;
	cout << endl;
	memilih();
}

int memilih() {
	int inputan;
	cout << "Masukkan pilihan : ";
	cin >> inputan;
	cout<<"\n";

	if (inputan == 1) {
		cout << endl;
		masukkanBarangKeKulkas();
		tampilkanMenu();
	} else if (inputan == 2) {
		cekKualitasBarang();
		tampilkanMenu();
	} else if (inputan == 3) {
		cout<<"================================ PENYIMPANAN =================================\n\n";
		cekPenyimpanan();
		tampilkanPenyimpanan();
		tampilkanMenu();
	} else if (inputan == 4) {
		cout << "                       KULKAS DITUTUP" << endl;
		return 0;
	} else {
		cout << "Masukkan pilihan yang sesuai!" << endl;
		tampilkanMenu();
	}
}


int masukkanBarangKeKulkas() {
	int banyakMacamSayuran = 0, i = 0, pilihan;
	int banyakMacamDaging = 0, j = 0;
	int banyakMacamTelur = 0,  k = 0;
	int banyakMacamMinuman = 0, l = 0;
	int banyakMacamMakanan = 0, m = 0;
	int banyakMacamLain = 0, n = 0;
	int validitas;
	string jawaban;

	cout<<"============================= MASUKKAN BARANG ================================\n\n";
	cout << "Kategori barang yang ingin dimasukkan ke dalam kulkas : " << endl;
	cout << "1. Sayur-sayuran" << endl;
	cout << "2. Daging (sapi/ikan/ayam/dll)" << endl;
	cout << "3. Telur" << endl;
	cout << "4. Minuman" << endl;
	cout << "5. Makanan" << endl;
	cout << "6. Lain-lain" << endl;
	cout << "7. Selesai" << endl;

	do {
		cout << endl;
		if(pilihan == 1) {
			if (sisa < 3) {

				cout << "KULKAS SUDAH PENUH! (pilih 7 untuk menampilkan isi kulkas dan kembali ke menu)\n";
				cout << endl;

			} else {
				cout << "    ========================== SAYUR-SAYURAN ==========================\n\n";
				cout << "Masukkan jumlah macam sayuran yang ingin dimasukkan ke dalam kulkas : ";
				cin >> banyakMacamSayuran;
				cout << endl;
				std::cin.ignore();

				if(totalSayuran > 0) {
					totalSayuran += banyakMacamSayuran;
					i = totalSayuran - banyakMacamSayuran;
					banyakMacamSayuran = totalSayuran;
				}

				for(i; i < banyakMacamSayuran; i++) {
					cout << "Masukkan nama sayuran (Case Sensitive) : ";
					getline(cin, namaSayuran[i]);
					cout << "Jumlah : ";
					cin >> jumlahSayuran[i];
					std::cin.ignore();
					cout << endl;
				}
				totalSayuran += banyakMacamSayuran;
				
			}


		} else if(pilihan == 2) {
			if (sisa < 2) {
				cout << "KULKAS SUDAH PENUH! (pilih 7 untuk menampilkan isi kulkas dan kembali ke menu)\n";
				cout << endl;
			} else {
				cout << "    ============================= DAGING ==============================\n\n";
				      
				cout << "Masukkan jumlah macam daging yang ingin dimasukkan ke dalam kulkas : ";
				cin >> banyakMacamDaging;
				cout << endl;
				std::cin.ignore();

				if(totalDaging > 0) {
					totalDaging += banyakMacamDaging;
					j = totalDaging - banyakMacamDaging;
					banyakMacamDaging = totalDaging;
				}

				for(j; j < banyakMacamDaging; j++) {
					cout << "Masukkan nama daging (Case Sensitive) : ";
					getline(cin, namaDaging[j]);
					cout << "Jumlah : ";
					cin >> jumlahDaging[j];
					std::cin.ignore();
					cout << endl;
				}
				totalDaging += banyakMacamDaging;
			}


		} else if(pilihan == 3) {
			if (sisa < 1) {
				cout << "KULKAS SUDAH PENUH! (pilih 7 untuk menampilkan isi kulkas dan kembali ke menu)\n";
				cout << endl;
			} else {
				cout << "    ============================= TELUR ===============================\n\n";
				cout << "Masukkan jumlah macam telur yang ingin dimasukkan ke dalam kulkas : ";
				cin >> banyakMacamTelur;
				cout << endl;
				std::cin.ignore();

				if(totalTelur > 0) {
					totalTelur += banyakMacamTelur;
					k = totalTelur - banyakMacamTelur;
					banyakMacamTelur = totalTelur;
				}

				for(k; k < banyakMacamTelur; k++) {
					cout << "Masukkan nama telur (Case Sensitive) : ";
					getline(cin, namaTelur[k]);
					cout << "Jumlah : ";
					cin >> jumlahTelur[k];
					std::cin.ignore();
					cout << endl;
				}
				totalTelur += banyakMacamTelur;
			}


		} else if(pilihan == 4) {
			if (sisa < 2) {
				cout << "KULKAS SUDAH PENUH! (pilih 7 untuk menampilkan isi kulkas dan kembali ke menu)\n";
				cout << endl;
			} else {
				cout << "    ============================ MINUMAN ==============================\n\n";
				      
				cout << "Masukkan jumlah macam minuman yang ingin dimasukkan ke dalam kulkas : ";
				cin >> banyakMacamMinuman;
				cout << endl;
				std::cin.ignore();

				if(totalMinuman > 0) {
					totalMinuman += banyakMacamMinuman;
					l = totalMinuman - banyakMacamMinuman;
					banyakMacamMinuman = totalMinuman;
				}

				for(l; l < banyakMacamMinuman; l++) {
					cout << "Masukkan nama minuman (Case Sensitive) : ";
					getline(cin, namaMinuman[l]);
					cout << "Jumlah : ";
					cin >> jumlahMinuman[l];
					std::cin.ignore();
					cout << endl;
				}
				totalMinuman += banyakMacamMinuman;
			}


		} else if(pilihan == 5) {
			if (sisa < 3) {
				cout << "KULKAS SUDAH PENUH! (pilih 7 untuk menampilkan isi kulkas dan kembali ke menu)\n";
				cout << endl;
			} else {
				cout << "    ============================= MAKANAN =============================\n\n"; 
				cout << "Masukkan jumlah macam makanan yang ingin dimasukkan ke dalam kulkas : ";
				cin >> banyakMacamMakanan;
				cout << endl;
				std::cin.ignore();

				if(totalMakanan > 0) {
					totalMakanan += banyakMacamMakanan;
					m = totalMakanan - banyakMacamMakanan;
					banyakMacamMakanan = totalMakanan;
				}

				for(m; m < banyakMacamMakanan; m++) {
					cout << "Masukkan nama minuman (Case Sensitive) : ";
					getline(cin, namaMakanan[m]);
					cout << "Jumlah : ";
					cin >> jumlahMakanan[m];
					std::cin.ignore();
					cout << endl;
				}
				totalMakanan += banyakMacamMakanan;
			}


		} else if(pilihan == 6) {
			if (sisa < 5) {
				cout << "KULKAS SUDAH PENUH! (pilih 7 untuk menampilkan isi kulkas dan kembali ke menu)\n";
				cout << endl;
			} else {
				cout << "    ============================ LAIN-LAIN ============================\n\n";
				cout << "Masukkan jumlah macam barang lain yang ingin dimasukkan ke dalam kulkas : ";
				cin >> banyakMacamLain;
				cout << endl;
				std::cin.ignore();

				if(totalLain > 0) {
					totalLain += banyakMacamLain;
					n = totalLain - banyakMacamLain;
					banyakMacamLain = totalLain;
				}

				for(n; n < banyakMacamLain; n++) {
					cout << "Masukkan nama barang lain (Case Sensitive) : ";
					getline(cin, namaLain[n]);
					cout << "Jumlah : ";
					cin >> jumlahLain[n];
					std::cin.ignore();
					cout << endl;
				}
				totalLain += banyakMacamLain;
			}


		} else if(pilihan == 7) {
			cin.ignore();  //
			while(cout << "Ingin cek isi kulkas? (y/n) ? ", getline(cin, jawaban), jawaban != "y" || jawaban != "n") {
				if(jawaban == "y") {
					cout<<"\n=============================== ISI KULKAS ==================================\n";
					if(totalSayuran != banyakMacamSayuran) {
						totalSayuran -= banyakMacamSayuran;
					} else {
						totalSayuran;
					}

					if(banyakMacamSayuran > 0) {
						tampilkanIsiKulkas(totalSayuran, 1);
					}

					if(totalDaging != banyakMacamDaging) {
						totalDaging -= banyakMacamDaging;
					} else {
						totalDaging;
					}

					if(banyakMacamDaging > 0) {
						tampilkanIsiKulkas(totalDaging, 2);
					}


					if(totalTelur != banyakMacamTelur) {
						totalTelur -= banyakMacamTelur;
					} else {
						totalTelur;
					}

					if(banyakMacamTelur > 0) {
						tampilkanIsiKulkas(totalTelur, 3);
					}

					if(totalMinuman != banyakMacamMinuman) {
						totalMinuman -= banyakMacamMinuman;
					} else {
						totalMinuman;
					}

					if(banyakMacamMinuman > 0) {
						tampilkanIsiKulkas(totalMinuman, 4);
					}

					if(totalMakanan != banyakMacamMakanan) {
						totalMakanan -= banyakMacamMakanan;
					} else {
						totalMakanan;
					}

					if(banyakMacamMakanan > 0) {
						tampilkanIsiKulkas(totalMakanan, 5);
					}

					if(totalLain != banyakMacamLain) {
						totalLain -= banyakMacamLain;
					} else {
						totalLain;
					}

					if(banyakMacamLain > 0) {
						tampilkanIsiKulkas(totalLain, 6);
					}
					break;
				} else if(jawaban == "n") {
					break;
				}
			}
			break;
		}

		cekPenyimpanan();
		tampilkanPenyimpanan();
		cout << endl;
	} while(cout << "> Masukkan pilihan : ", cin >> pilihan); 
}



int cekKualitasBarang() {
	int i, rando;
	string kwal;
	cout << endl;
	srand(time(0));
	cout<<"============================= CEK KUALITAS ==================================\n\n";
	if (totalSayuran > 0) {
		cout << "   Sayur-Sayuran : \n";
		for (i = 1; i <= totalSayuran; i++) {
			rando = (1 + (rand() % 20));
			cout <<"   "<< i << ". " <<namaSayuran[(i - 1)] << endl;
			if (rando >= 11) {
				kwal = "Bagus";
			} else if (rando <= 10) {
				kwal = "Busuk";
			}
			cout << "      Kualitas : " << kwal << endl;
			cout << endl;
		}
	}

	if (totalDaging > 0) {
		cout << "   Daging : \n";
		for (i = 1; i <= totalDaging; i++) {
			rando = (1 + (rand() % 20));
			cout <<"   "<< i << ". " <<namaDaging[(i - 1)] << endl;
			if (rando >= 11) {
				kwal = "Bagus";
			} else if (rando <= 10) {
				kwal = "Busuk";
			}
			cout << "      Kualitas : " << kwal << endl;
			cout << endl;
		}
	}

	if (totalTelur > 0) {
		cout << "   Telur : \n";
		for (i = 1; i <= totalTelur; i++) {
			rando = (1 + (rand() % 20));
			cout <<"   "<< i << ". " <<namaTelur[(i - 1)] << endl;
			if (rando >= 11) {
				kwal = "Bagus";
			} else if (rando <= 10) {
				kwal = "Busuk";
			}
			cout << "      Kualitas : " << kwal << endl;
			cout << endl;
		}
	}

	if (totalMinuman > 0) {
		cout << "   Minuman : \n";
		for (i = 1; i <= totalMinuman; i++) {
			rando = (1 + (rand() % 20));
			cout <<"   "<< i << ". " <<namaMinuman[(i - 1)] << endl;
			if (rando >= 11) {
				kwal = "Bagus";
			} else if (rando <= 10) {
				kwal = "Busuk";
			}
			cout << "      Kualitas : " << kwal << endl;
			cout << endl;
		}
	}

	if (totalMakanan > 0) {
		cout << "   Makanan : \n";
		for (i = 1; i <= totalMakanan; i++) {
			rando = (1 + (rand() % 20));
			cout <<"   "<< i << ". " <<namaMakanan[(i - 1)] << endl;
			if (rando >= 11) {
				kwal = "Bagus";
			} else if (rando <= 10) {
				kwal = "Busuk";
			}
			cout << "      Kualitas : " << kwal << endl;
			cout << endl;
		}
	}

	if (totalLain > 0) {
		cout << "   Lain-lain : \n";
		for (i = 1; i <= totalLain; i++) {
			rando = (1 + (rand() % 20));
			cout <<"   "<< i << ". " <<namaLain[(i - 1)] << endl;
			if (rando >= 11) {
				kwal = "Bagus";
			} else if (rando <= 10) {
				kwal = "Busuk";
			}
			cout << "      Kualitas : " << kwal << endl;
			cout << endl;
		}
	}
	cout << endl;
}

int cekPenyimpanan() {
	int sayur = 0, daging = 0, telur = 0, minuman = 0, makanan = 0, lain = 0;
	for(int i = 0; i < totalSayuran; i++) {
		sayur += jumlahSayuran[i];
	}

	for(int i = 0; i < totalDaging; i++) {
		daging += jumlahDaging[i];
	}

	for(int i = 0; i < totalTelur; i++) {
		telur += jumlahTelur[i];
	}

	for(int i = 0; i < totalMinuman; i++) {
		minuman += jumlahMinuman[i];
	}

	for(int i = 0; i < totalMakanan; i++) {
		makanan += jumlahMakanan[i];
	}

	for(int i = 0; i < totalLain; i++) {
		lain += jumlahLain[i];
	}

	int jumlah = ((sayur * levelSayur) + (daging * levelDaging) + (telur * levelTelur) + (minuman * levelMinuman)
	              + (makanan * levelMakanan) + (lain * levelLain));
	sisa = penyimpanan - jumlah;

	return sisa;

}

void tampilkanPenyimpanan() {
	cout << "                 KAPASITAS KULKAS TERSISA : " << sisa << " % DARI 100 % \n";
}

int tampilkanIsiKulkas(int total, int id) {
	cout << endl;
	if(id == 1) {
		cout << "   Sayuran-Sayuran : " << endl;
		for(int i = 0; i < total; i++) {
			cout <<"   "<<i+1<<". " <<namaSayuran[i] << endl;
			cout<<"      Jumlah = " << jumlahSayuran[i] << " item"<< endl;
		}
		cout << endl;
	} else if(id == 2) {
		cout << "   Daging : " << endl;
		for(int i = 0; i < total; i++) {
			cout <<"   "<<i+1<<". "<< namaDaging[i] <<endl;
			cout<< "      Jumlah = " << jumlahDaging[i] << " item"<< endl;
		}
		cout << endl;
	} else if(id == 3) {
		cout << "   Telur : " << endl;
		for(int i = 0; i < total; i++) {
			cout <<"   "<<i+1<<". " <<namaTelur[i] <<endl;
			cout<< "      Jumlah = " << jumlahTelur[i] << " item"<< endl;
		}
		cout << endl;
	} else if(id == 4) {
		cout << "   Minuman : " << endl;
		for(int i = 0; i < total; i++) {
			cout <<"   "<<i+1<<". "<< namaMinuman[i] <<endl;
			cout<< "      Jumlah = " << jumlahMinuman[i] << " item"<< endl;
		}
		cout << endl;
	} else if(id == 5) {
		cout << "   Makanan : " << endl;
		for(int i = 0; i < total; i++) {
			cout <<"   "<<i+1<<". "<<namaMakanan[i] <<endl;
			cout<< "      Jumlah = " << jumlahMakanan[i] << " item"<< endl;
		}
		cout << endl;
	} else if(id == 6) {
		cout << "   Lainnya : " << endl;
		for(int i = 0; i < total; i++) {
			cout <<"   "<<i+1<<". " <<namaLain[i] <<endl;
			cout<< "      Jumlah = " << jumlahLain[i] << " item"<< endl;
		}
		cout << endl;
	}
	cout<<"-----------------------------------------------------------------------------\n";
}


int main() {
	tampilkanMenu();
	return 0;
}
