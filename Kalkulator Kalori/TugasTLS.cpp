#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    double beratBadan, tinggiBadan, umur, bmr, kal;
    char jenisKelamin;
    int tingkatAktivitas;

    // Input data dari pengguna
    cout << "Masukkan berat badan (kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggiBadan;
    cout << "Masukkan umur (tahun): ";
    cin >> umur;
    cout << "Masukkan jenis kelamin (L/P): ";
    cin >> jenisKelamin;
    cout << "Pilih tingkat aktivitas fisik:\n";
    cout << "1. Hampir tidak pernah berolahraga\n";
    cout << "2. Jarang berolahraga\n";
    cout << "3. Sering berolahraga atau beraktivitas fisik berat\n";
    cout << "Pilih angka 1-3: ";
    cin >> tingkatAktivitas;

    // Menghitung BMR berdasarkan rumus
    if (jenisKelamin == 'L' || jenisKelamin == 'l') {
        bmr = 66.5 + (13.7 * beratBadan) + (5 * tinggiBadan) - (6.8 * umur);
    } else if (jenisKelamin == 'P' || jenisKelamin == 'p') {
        bmr = 665 + (9.6 * beratBadan) + (1.8 * tinggiBadan) - (4.7 * umur);
    } else {
        cout << "Masukkan jenis kelamin yang valid (L/P).\n";
        return 1; // Keluar dari program dengan kode error
    }

    // Menghitung Total Kalori Berdasarkan Tingkat Aktivitas Fisik
    switch (tingkatAktivitas) {
        case 1:
            kal = bmr * 1.2;
            break;
        case 2:
            kal = bmr * 1.3;
            break;
        case 3:
            kal = bmr * 1.4;
            break;
        default:
            cout << "Masukkan tingkat aktivitas yang valid (1-3).\n";
            return 1; // Keluar dari program dengan kode error
    }

    // Menampilkan hasil BMR dan Total Kalori
    cout << "BMR (Basal Metabolic Rate): " << bmr << " kalori per hari" << endl;
    cout << "Total kalori yang diperlukan per hari: " << kal << " kalori" << endl;
    system("pause");
    return 0; 
}
