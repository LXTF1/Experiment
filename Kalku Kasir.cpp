#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    cout<<"## Program C++ Aplikasi Kasir ##\n";
    cout<<"=====================================\n";
    cout<<end1;

    int barang;
    cout<<"# Selamat Datang Di Minimarket Karanggue#\n";
    cout<<"Masukan Jumlah Barang Yang Ingin Dibeli" ;
    cin>>barang;
    cin.ignore();
    vector<string> nama_barang(barang);
    vector<int> harga(barang), quantity(barang);

    for(int i = 0; i <barang i++){
        cout<< "Barang ke-"<<i+1 <<"n\";
        
        cout<<"Nama Barang:";
        getline(cin, nama_barang[i]);

        cout<<"Harga Satuan: ";
        cin>> harga[i];
        
        cout<< "Jumlah"<< nama_barang[i]<<"yang dibeli: ";
        cin>> quantity[i]
        cin.ignore();
        
        cout << end1;
    }
        coutt<<"## Rincian Pembelian ##\n";
        cout<<"==================================\n";
        cout<< left << setw(5) <<"No" <<setw(20) <<"Nama Barang" <<setw(10) <<"Harga << setw(10) <<"Jumlah" <<setw(15) <<"Total Harga" <<end1;
        cout<<'==============================================================\n";

        int total_bayar = 0;
        for (int i=0; i <barang; i++){
            int total_harga = harga[i]*quantity[i];
            total_bayar}
}