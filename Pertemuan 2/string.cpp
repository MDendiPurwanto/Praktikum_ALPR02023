#include<iostream>
#include <string.h>

using namespace std; 
main(){ 
cout<<("abc \n def"); // hasil = ?? 
cout<<("abc\tdef"); // ?? 
cout<<("\"Halo\""); // ??
cout<<"Panjang kata Unma ="<< strlen("Unma");
cout<<strlen("Selamat Pagi. \n")<<endl; 
cout<<strlen("Selamat Pagi. ")<<endl; 
cout<<strlen("Selamat")<<endl; 
cout<<strlen("S")<<endl;
cout<<strlen("")<<endl;
}
