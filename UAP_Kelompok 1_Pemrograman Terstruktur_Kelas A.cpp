// Library
#include <iostream> 	// Iostream adalah header yang dibutuhkan untuk “kegiatan” input dan output. 
#include <queue>	// Memanggil STL Queue pada C++
#include <conio.h>	// Fungsi getch() (get character and echo) dipakai untuk membaca sebuah karakter dengan sifat karakter yang dimasukkan tidak perlu diakhiri dengan menekan tombol ENTER
#include <ctime>    	// Mengkonvesi nilai yang dihasilkan dari pemangilan fungsi time() ke dalam bentuk string.

using namespace std;

//stl
queue<string>data;
queue<string>jalan;
queue<string>tarif;
queue<string>jenis;

// variabel Global
string mobil, noPolisi, harga, gol, tujuan;

// Fungsi Judul 
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

// Fungsi Menampilkan Display
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
        cout << "\n\t\tNotifikasi : Antrian Kendaraan Kosong!" << endl;				
    }
	
    else{
	    
	system("cls");
	header();
	    
        time_t now = time(0);
        char* dt = ctime(&now);
	    
	cout<<"\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"\t--------------------------BUKTI TRANSAKSI------------------------"<<endl;
        cout<<"\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout << "\t Tanggal Transaksi\t: " << dt;
        cout << "\t Kendaraan\t\t: " << jenis.front() << endl;
	cout << "\t Tujuan\t\t\t: " << jalan.front() << endl;
	cout << "\t Nomor polisi\t\t: " << data.front() << endl;
	cout << "\t Harga\t\t\t: " << tarif.front() << endl;
	cout<<"\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"\t--------------------------TOL INDRALAYA--------------------------"<<endl;
        cout<<"\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	    
        jenis.pop(); jalan.pop(); data.pop(); tarif.pop();
	    
    }
	
}

// fungsi size
void size(){
	
    if(data.empty()){									// fungsi empty untuk menghapus seluruh data pada queue
        cout << "\n\t\tNotifikasi : Antrian Kosong!\n";
    }
	
     else{
	cout << "\n\t\tKondisi Tol Saat Ini " << endl << endl;
        cout << "\t\tJumlah Kendaraan Saat Ini   : " << data.size() << endl;	    	// fungsi size untuk menampilkan seluruh data pada queue
        cout << "\t\tKendaraan Paling Depan      : " << data.front() << endl;		// fungsi front untuk menampilkan data paling awal pada queue
        cout << "\t\tKendaraan Paling Belakang   : " << data.back() << endl;		// fungsi back untuk menampilkan data paling akhir pada queue
    }
	
}

// fungsi view
void view(queue <string> tujuanview, queue <string> platview, queue <string> golview){
    if(data.empty()){
	cout << "\t\t=====================================================" << endl;
	cout << "\t\t\t\tPintu 1 Tol Indralaya  " << endl;
	cout << "\t\t=====================================================" << endl;
        cout << "\n\t\tAntrian Kendaraan Kosong!\n";
    }
    else{
       	cout << "\t\t=====================================================" << endl;
	cout << "\t\t\t\tPintu 1 Tol Indralaya " << endl;
	cout << "\t\t=====================================================" << endl;
        queue <string> t = tujuanview;
	queue <string> p = platview;
        queue <string> g = golview;
        while (!p.empty() && !g.empty()){
        	cout << "\n\t\t" << t.front() << " - " << p.front() << " " << g.front();
		t.pop(); p.pop(); g.pop();
    	}
    cout << '\n';
    }
}

// fungsi utama
int main(){
	
	int pilihan;
	
	do{
		header();
		
       		view(jalan, data, jenis);
		
        	cout << "\n\t\t1. Masukkan Data kendaraan"
        	     << "\n\t\t2. Memasukkan Kendaraan Ke Tol"
        	     << "\n\t\t3. Kondisi Lalu Lintas Tol"
        	     << "\n\t\t4. Keluar Sistem"
        	     << "\n\n\t\t>> Choose : "; 
            	cin >> pilihan;
            	cin.ignore();
		
		switch(pilihan){
		    case 1:
        	        enqueue();
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
        	        cout << "\n\t\tTerima Kasih Telah Menggunakan Program Ini" << endl;
        	        getch();
        	        break;
        	    default:
         	       cout << "\nNotifikasi : \nPilihan Tidak Ada\nMasukan Pilihan Sesuai Dengan Daftar" << endl;
         	       getch();
         	       break;
		}
		
        	system("cls");
		
	}while(pilihan != 4);
	
	return 0;
	
}
