#include <iostream>
using namespace std;

int main() {
    int quiz, uts, uas;
    float nilaiAkhir, rataRata;

    cout << "Masukan Nilai Quiz : "; cin >> quiz;
    cout << "Masukan Nilai UTS : "; cin >> uts;
    cout << "Masukan Nilai UAS : "; cin >> uas;
    cout << endl;

    nilaiAkhir = (0.25 * quiz) + (0.35 * uts) + (0.4 * uas);
    rataRata = (quiz + uts + uas) / 3;

    cout << "Nilai Quiz : " << quiz << endl;
    cout << "Nilai UTS : " << uts << endl;
    cout << "Nilai UAS : " << uas << endl;
    cout << "Nilai Akhir : " << nilaiAkhir << endl;
    cout << "Rata - Rata Nilai : " << rataRata << endl;

    if (nilaiAkhir >= 0 && nilaiAkhir < 45) {
        cout << "Huruf Mutu : E" << endl;
    } else if (nilaiAkhir >= 45 && nilaiAkhir < 55) {
        cout << "Huruf Mutu : D" << endl;
    } else if (nilaiAkhir >= 55 && nilaiAkhir < 68) {
        cout << "Huruf Mutu : C" << endl;
    } else if (nilaiAkhir >= 68 && nilaiAkhir < 80) {
        cout << "Huruf Mutu : B" << endl;
    } else if (nilaiAkhir >= 80 && nilaiAkhir <= 100) {
        cout << "Huruf Mutu : A" << endl;
    }

    if (rataRata >= 60) {
        cout << "LULUS" << endl;
    } else {
        cout << "GAGAL" << endl;
    }

    return 0;
}