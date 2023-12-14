#include <iostream>
using namespace std;
 
int main()
{
    cout << "--> Integer " << endl;
    cout << "Ukuran Memori dari int : " << sizeof(int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed short int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed long int) << endl;
    cout << "Ukuran Memori dari signed int : " << sizeof(signed long long int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned short int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned long int) << endl;
    cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned long long int) << endl;
 
    cout << endl << "--> Floating Point " << endl;
    cout << "Ukuran Memori dari float : " << sizeof(float) << endl;
 
    cout << endl << "--> Double Floating Point " << endl;
    cout << "Ukuran Memori dari Double : " << sizeof(double) << endl;
    cout << "Ukuran Memori dari Long Double : " << sizeof(long double) << endl;
 
    cout << endl << "--> Boolean " << endl;
    cout << "Ukuran Memori dari Boolean : " << sizeof(bool) << endl;
 
    return 0;
}
