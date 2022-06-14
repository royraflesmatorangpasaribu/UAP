#include<iostream>
using namespace std;

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

void view(queue<string> gq)
{
    if(data.empty()){
        cout << "=== Daftar Kendaraan ===\n";
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
	do{
        view(data);
        cout << "\n1. Masukkan No Polisi Kendaraan"
             << "\n2. Memasukkan Kendaraan Ke Toll"
             << "\n3. Size"
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
	}while(pilihan != 4);
}
