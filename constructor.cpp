#include <iostream>
using namespace std;

class mahasiswa{
public:
mahasiswa(); // Constructor mahasiswa
};

mahasiswa::mahasiswa(){
    cout<<"Constructor Terpanggil"<<endl; //Definisi Constructor
};

int main(){
    mahasiswa mhs; //Pembuatan Objeck
    return 0;
}