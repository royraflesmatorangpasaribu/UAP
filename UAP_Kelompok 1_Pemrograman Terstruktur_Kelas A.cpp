//Library
#include <iostream> 	//iostream adalah header yang dibutuhkan untuk “kegiatan” input dan output. 
#include <queue>	// Memanggil STL Queue pada C++
#include <conio.h>	//Fungsi getch() (get character and echo) dipakai untuk membaca sebuah karakter dengan sifat karakter yang dimasukkan tidak perlu diakhiri dengan menekan tombol ENTER
#include <ctime>    // mengkonvesi nilai yang dihasilkan dari pemangilan fungsi time() ke dalam bentuk string.

using namespace std;

// variabel Global
queue<string>data;
queue<string>jalan;
queue<string>tarif;
queue<string>jenis;

string mobil, noPolisi, harga, gol, tujuan;

void header(){
	cout << " ---------------------------------------------------------------------------------" << endl;
	cout << " |\t        ___   ____  _  __ ______ __  __     ______ ____   __        \t |" << endl;
	cout << " |\t       / _ \\ /  _/ / |/ //_  __// / / /    /_  __// __ \\ / /      \t |" << endl;
	cout << " |\t      / ___/_/ /  /    /  / /  / /_/ /      / /  / /_/ // /__       \t |" << endl;
	cout << " |\t     /_/   /___/ /_/|_/  /_/   \\____/      /_/   \\____//____/     \t |" << endl;
	cout << " |\t                                                                    \t |"<< endl;
	cout << " |\t      ____  _  __  ___    ___    ___    __    ___  __  __  ___      \t |" << endl;
	cout << " |\t     /  _/ / |/ / / _ \\  / _ \\  / _ |  / /   / _ | \\ \\/ / / _ | \t |" << endl;
	cout << " |\t    _/ /  /    / / // / / , _/ / __ | / /__ / __ |  \\  / / __ |    \t |" << endl;
	cout << " |\t   /___/ /_/|_/ /____/ /_/|_| /_/ |_|/____//_/ |_|  /_/ /_/ |_|     \t |" << endl;
	cout << " |\t                                                                    \t |"<< endl;
	cout << " ---------------------------------------------------------------------------------" << endl << endl;
}

void display(){
	cout << " ------------------------------------------------------------------------------------------------" << endl;
	cout << "                                TARIF TOL PADA RUAS JALAN TOL INDRALAYA                          " << endl;
	cout << " ------------------------------------------------------------------------------------------------" << endl;
	cout << "   Golongan 1: Kendaraan jenis sedan, mobil jip, pikap atau truk kecil, dan bus" << endl;
	cout << "   Golongan 2: Kendaraan truk besar dengan dua gandar" << endl;
	cout << "   Golongan 3: Kendaraan truk besar dengan tiga gandar" << endl;
	cout << "   Golongan 4: Kendaraan truk besar dengan empat gandar" << endl;
	cout << "   Golongan 5: Kendaraan truk besar dengan lima gandar" << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "|                  |                     |                     Tarif Tol (Rp)                   |" << endl;
	cout << "|  Asal Perjalanan |  Tujuan Perjalanan  |-------------------------------------------------------" << endl;
	cout << "|                  |                     |  Gol 1   |  Gol 2   |  Gol 3   |  Gol 4   |  Gol 5   |" << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "|                  |      Palembang      |  20.500  |  26.000  |  31.000  |  37.500  |  41.500  |" << endl;
	cout << "|   S. Indralaya   |-----------------------------------------------------------------------------" << endl;
	cout << "|                  |      Pemulutan      |  13.500  |  17.000  |  20.000  |  25.000  |  27.000  |" << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
}

// fungsi push
void enqueue(){
    do{
    	ulangTuju:
    	system("cls");
    	display();
		
    	cout <<endl;
    	cout << " >> Tujuan Perjalanan 1. Palembang" << endl;
    	cout << "\t\t      2. Pemulutan" << endl;
    	cout << " >> Pilih Tujuan : ";
    	getline(cin, tujuan);
    	
    	if(tujuan.empty()){
    		cout << endl << " Tujuan Perjalanan Tidak Boleh Kosong!";
    		getch();
		}
		else if(tujuan == "1"){
			tujuan = "Palembang";
			
			ulang_1:
    		system("cls");
    		display();
    	
			cout << " >> Masukkan Jenis Kendaraan\t: ";
			getline(cin, mobil);
			
			if(mobil.empty()){
				cout << endl << " Jenis Kendaraan Tidak Boleh Kosong!";
				getch();
				goto ulang_1;
    		}
    		
    		else{
				if(mobil == "1"){
					gol = "Golongan 1";
					harga = "Rp20.500";
				}
			
				else if(mobil == "2"){
					gol = "Golongan 2";
					harga = "Rp26.000";
				}
		
				else if(mobil == "3"){
					gol = "Golongan 3";
					harga = "Rp31.000";
				}
			
				else if(mobil == "4"){
					gol = "Golongan 4";
					harga = "Rp37.500";
				}
			
				else if(mobil == "5"){
					gol = "Golongan 5";
					harga = "Rp41.000";
				}	
				else{
					cout << " Golongan Mobil Tidak Tersedia";
					getch();
					goto ulang_1;
				}
			
			cout << endl << " Kendaraan Tujuan " << tujuan << " " << gol << " bertarif " << harga << endl;
			getch();
			
			do{
				system("cls");
				display();
				
				cout << " >> Masukan Nomor Polisi\t: ";
				getline(cin, noPolisi);
				
				if(noPolisi.empty()){
					cout << endl << " Kendaraan Tidak Boleh Kosong!" << flush;
					getch();
				}
				
			}while(noPolisi.empty());
			
			}
		
		}
		else if(tujuan == "2"){
			tujuan = "Pemulutan";
			
			ulang_2:
    		system("cls");
    		display();
    	
			cout << " >> Masukkan Jenis Kendaraan\t: ";
			getline(cin, mobil);
			
			if(mobil.empty()){
				cout << endl << " Jenis Kendaraan Tidak Boleh Kosong!";
				getch();
				goto ulang_2;
    		}
    		
    		else{
				if(mobil == "1"){
					gol = "Golongan 1";
					harga = "Rp13.500";
				}
			
				else if(mobil == "2"){
					gol = "Golongan 2";
					harga = "Rp17.000";
				}
		
				else if(mobil == "3"){
					gol = "Golongan 3";
					harga = "Rp20.000";
				}
			
				else if(mobil == "4"){
					gol = "Golongan 4";
					harga = "Rp25.000";
				}
			
				else if(mobil == "5"){
					gol = "Golongan 5";
					harga = "Rp27.000";
				}	
				else{
					cout << " Golongan Mobil Tidak Tersedia";
					getch();
					goto ulang_2;
				}
			
			cout << endl << " Kendaraan Tujuan " << tujuan << " " << gol << " bertarif " << harga << endl;
			getch();
			
			do{
				system("cls");
				display();
				
				cout << " >> Masukan Nomor Polisi\t: ";
				getline(cin, noPolisi);
				
				if(noPolisi.empty()){
					cout << endl << "\t\t\nKendaraan Tidak Boleh Kosong!" << flush;
					getch();
					}
				
				}while(noPolisi.empty());
			}
		}
		
		else{
			cout << "\n Notifikasi : Tujuan Anda Tidak Tersedia" << endl;
			getch();
			goto ulangTuju;
		}
		
    }while(tujuan.empty());
    
    jalan.push(tujuan);
    jenis.push(gol);
    tarif.push(harga);
    data.push(noPolisi);
    
}

// fungsi pop
void dequeue(){
    if(data.empty()){								// fungsi empty untuk menghapus seluruh data pada queue
        cout << "Kendaraan Kosong!" << endl;				
    }
    else{
        cout << "\nKendaraan dengan " << data.front() << " pada Antrian Pertama Telah pergi!\n";
        data.pop();
    }
}

// fungsi size
void size(){
    if(data.empty()){								
        cout << "\nKendaraan Kosong!\n";
    }
    else{
        cout << "\nJumlah Kendaraan Saat Ini\t\t: " << data.size() << endl;	// fungsi size untuk menampilkan seluruh data pada queue
        cout << "Kendaraan Paling Depan\t: " << data.front() << endl;		// fungsi front untuk menampilkan data paling awal pada queue
        cout << "Kendaraan Paling Belakang\t: " << data.back() << endl;		// fungsi back untuk menampilkan data paling akhir pada queue
    }
}

// fungsi view
void view(queue <string> gq){
    if(data.empty()){
	cout << "===============================" << endl;
	cout << "|       Daftar Kendaraan      |" << endl;
	cout << "===============================" << endl;
        cout << "\nAntrian Kosong!\n";
    }
    else{
       	cout << "===============================" << endl;
	cout << "|       Daftar Kendaraan      |" << endl;
	cout << "===============================" << endl;
        queue <string> g = gq;
        while (!g.empty()){
        	cout << '\n' << g.front();
        	g.pop();
    	}
    cout << '\n';
    }
}

// fungsi utama
int main(){
	int pilihan;
	do{
       		view(data);
        	cout << "\n1. Masukkan No Polisi Kendaraan"
        	     << "\n2. Memasukkan Kendaraan Ke Toll"
        	     << "\n3. Kondisi Lalu Lintas Toll"
        	     << "\n4. Keluar Sistem"
        	     << "\n\n>> Choose : "; 
            	cin >> pilihan;
            	cin.ignore();
		switch(pilihan){
		    case 1:
        	        enqueue();
        	        getch();
        	        break;
        	    case 2:
        	        dequeue();
        	        getch();
        	        break;
        	    case 3:
        	        size();
        	        getch();
        	        break;
		    case 4:
        	        cout << "\nTerima Kasih Telah Menggunakan Program Ini" << endl;
        	        getch();
        	        break;
        	    default:
         	       cout << "\nPilihan Tidak Ada\nMasukan Pilihan Sesuai Dengan Daftar" << endl;
         	       getch();
         	       break;
		}
        	system("cls");
	}while(pilihan != 4);
	
	//karena menggunakan fungsi main()
	return 0;
}
