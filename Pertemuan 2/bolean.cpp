#include <iostream>
using namespace std;
 
int main()
{
    int angka; //Tipe data Integer untuk menyimpan data bersifat bilangan bulat
    bool hasil = true; //Tipe data Boolean yang mempunyai nilai awal true ( 1 )
 
    cout<<"Masukan angka = ";cin>>angka; //Input Bilangan bulat ke variabel "angka"
 
    hasil = angka > 10;
    //variabel "hasil" akan menyimpan nilai kondisi dari variabel "angka" > 10.
    cout<<hasil; //jika kondisi True maka akan tertulis angka 1 atau 0 jika kondisi False.
    return 0;
}
