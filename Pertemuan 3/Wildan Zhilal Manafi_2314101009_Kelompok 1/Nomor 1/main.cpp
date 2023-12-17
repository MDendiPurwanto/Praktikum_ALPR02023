#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukan Nilai : "; cin >> nilai;

    if (nilai >= 0 && nilai < 30) {
        cout << "Nilai Rendah" << endl;
    } else if (nilai >= 30 && nilai < 60) {
        cout << "Nilai Sedang" << endl;
    } else if (nilai >= 60 && nilai <= 100) {
        cout << "Nilai Tingi" << endl;
    } else {
        cout << "Nilai Invalid (Nilai: 0 - 100)" << endl;
    }

    return 0;
}