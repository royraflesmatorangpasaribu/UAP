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

int main(){
	
}
