#include <iostream>
using namespace std;
 
int main(){
    char x='A'; //Variabel Char hanya dapat memuat satu karakter.
 
    cout<<"Masukan kelas = ";cin>>x; //Jika anda memasukan karakter lebih dari satu maka variabel "x" hanya akan mengambil satu karakter pertama.
    cout<<endl<<"Yang anda masukan adalah "<<endl<<x;
 
    return 0;
}
