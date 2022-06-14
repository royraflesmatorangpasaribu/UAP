// library
#include <iostream> 	//iostream adalah header yang dibutuhkan untuk “kegiatan” input dan output. 
#include <queue>	// Memanggil STL Queue pada C++
#include <conio.h>	//Fungsi getch() (get character and echo) dipakai untuk membaca sebuah karakter dengan sifat karakter yang dimasukkan tidak perlu diakhiri dengan menekan tombol ENTER

using namespace std;

// variabel Global
queue<string>data;
string noPolisi;

// fungsi push
void enqueue(){
    do{
    	system("cls");
    	cout << "Masukan Nomor Polisi  : ";
    	getline(cin, noPolisi);
    	if(noPolisi.empty()){
        	cout << "\nKendaraan Tidak Boleh Kosong!";
        	getch();
    	}
    }while(noPolisi.empty());
    data.push(noPolisi);
}

// fungsi pop
void dequeue(){
    if(data.empty()){
        cout << "Kendaraan Kosong!" << endl;
    }
    else{
        cout << "\nKendaraan dengan " << data.front() << " pada Antrian Pertama Telah pergi!\n";
        data.pop();
    }
}

// fungsi size
void size(){
    if(data.empty()){								// fungsi empty untuk menghapus seluruh data pada queue
        cout << "\nAntrian Kosong!\n";
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
	return 0;
}
