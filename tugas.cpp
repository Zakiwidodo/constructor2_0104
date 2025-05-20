//Buatlah program C++ dengan class Barang yang memiliki atribut : namaBarang,
//KodeBarang
//program memiliki constructor berparameter 
//untuk mengisi nolai namaBaarang dan kodeBarang.
//serta memiliki fungsi untuk menampilkan informasi barang.

#include <iostream>
#include <string>
using namespace std;

class Barang 
{
    public:
        string namaBarang;
        int kodeBarang;
        // Constructor dengan definisi
        
        Barang(string nama,int kode)
        {
            namaBarang = nama;
            kodeBarang = kode;
        }

        void output()
        {
            cout << "Nama Barang : " << namaBarang << endl;
            cout << "Kode Barang : " << kodeBarang << endl;
        }
};

int main()
{
    Barang a("Kulkas", 123);
    a.output();
    Barang b("Handphone", 456);
    b.output();
    Barang c("Laptop", 789);
    c.output();
    Barang d("Pulpen", 101);
    d.output();
    Barang e("Musang", 112);
    e.output();
    Barang f("Musaang King", 113);
    f.output();
    Barang g("Musang nya zidan",114);
    g.output();
}



