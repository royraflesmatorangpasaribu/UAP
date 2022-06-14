#include <iostream>
#include <queue>
#include <conio.h>

using namespace std;

queue<string>data;
string noPolisi;

void enqueue(){
    do{
    	system("cls");
    	cout<<"Masukan Nomor Polisi  : ";
    	getline(cin, noPolisi);
    	if(noPolisi.empty()){
        	cout << "\nKendaraan tidak boleh Kosong!";
        	getch();
    	}
    }while(noPolisi.empty());
    data.push(noPolisi);
}

void dequeue(){
    if(data.empty()){
        cout<<"Kendaraan Kosong!"<<endl;
    }
    else{
        cout << "\nKendaraan pada Antrian Pertama Telah pergi!\n";
        data.pop();
    }
}

void size(){
    if(data.empty()){
        cout << "\nAntrian Kosong!\n";
    }
    else{
        cout << "\nJumlah Kendaraan Saat Ini\t\t: " << data.size() << endl;
        cout << "Kendaraan Paling Depan\t: " << data.front() << endl;
        cout << "Kendaraan Paling Belakang\t: " << data.back() << endl;
    }
}

void view(queue<string> gq){
    if(data.empty()){
	cout << "===============================" << endl;
	cout << "|       Daftar Kendaraan      |" << endl;
	cout << "===============================" << endl;
        cout << "\nAntrian Kosong!\n";
    }
    else{
        cout << "=== Daftar Kendaraan ===\n";
        queue<string> g = gq;
        while (!g.empty()){
        	cout << '\n' << g.front();
        	g.pop();
    	}
    cout << '\n';
    }
}

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
}
