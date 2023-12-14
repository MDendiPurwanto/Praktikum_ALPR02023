#include <iostream>
using namespace std;
 
int main(){
    float jari, hasil ;
    const float p=3.14; //variabel konstanta
 
    cout<<"Masukan Jumlah jari-jari = ";cin>>jari;
    hasil = (jari * p)*2; //disini kita menggunakan variabel float
    //karena hasil dari penghitungan lingkaran biasanya berbentuk bilangan pecahan
    cout<<"Keliling dari Lingkaran adalah "<<hasil;
 
    return 0;
}
