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
	
}
