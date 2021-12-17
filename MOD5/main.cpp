#include "SLL.h"

int main()
{
    List L;
    string nip;
    string Back;

    int menu;
    int TotalPegawai;
    float TotalGaji;
    float RataGaji;

    createList_1301204289(L);

    while (Back != "N") {
            cout << "================MENU================" << endl;
            cout << "1. Tambah Data Pegawai" << endl;
            cout << "2. Tampilkan Data Pegawai" << endl;
            cout << "3. Cari Data Pegawai Berdasarkan NIP" << endl;
            cout << "4. Hapus Data Berdasarkan NIP" << endl;
            cout << "5. Jumlah Pegawai Saat ini" << endl;
            cout << "6. Rata - Rata Penghasilan Pegawai" << endl;
            cout << "7. Nama Pegawai dengan Gaji Tertinggi" << endl;
            cout << "0. Exit" << endl;
            cout << "====================================" << endl;
            if (Back != "N") {
                cout << "Masukkan menu : ";
                cin >> menu;
                cout << "====================================" << endl;

                if (menu == 1) {
                    addNdata_1301204289(L);
                    TotalPegawai = jumlahPegawai_1301204289(L); // Update jumlah pegawai
                } else if (menu == 2) {
                    printList_1301204289(L);
                } else if (menu == 3) {
                    cout << "Masukkan NIP : ";
                    cin >> nip;

                    TotalPegawai = jumlahPegawai_1301204289(L); // Update jumlah pegawai
                    searchByNIP_1301204289(L, nip);
                } else if (menu == 4) {
                    cout << "Masukkan NIP : ";
                    cin >> nip;

                    deleteData_1301204289(L, nip);
                    TotalPegawai = jumlahPegawai_1301204289(L); // Update jumlah pegawai
                } else if (menu == 5) {
                    TotalPegawai = jumlahPegawai_1301204289(L); // Update jumlah pegawai
                    cout << "Jumlah Pegawai : " << TotalPegawai << endl;
                } else if (menu == 6) {
                    TotalPegawai = jumlahPegawai_1301204289(L); // Update jumlah pegawai
                    TotalGaji = totalSalary_1301204289(L);
                    RataGaji = TotalGaji / TotalPegawai;

                    cout << "Rata - rata Gaji Pegawai : " << RataGaji << endl;
                } else if (menu == 7) {
                    TotalPegawai = jumlahPegawai_1301204289(L); // Update jumlah pegawai
                    SearchGaji_1301204289(L);
                } else if (menu == 0) {
                    cout << "Anda telah keluar dari Program" << endl;
                    break;
                } else {
                    cout << "Input yang anda masukkan salah!" << endl;
                }
            }
            cout << "====================================" << endl;
            cout << "Kembali ke menu utama? (Y/N) : ";
            cin >> Back;
            cout << "====================================" << endl;
    }

    /* cout << endl;
    cout << "Masukkan NIP : ";
    cin >> nip;

    searchByNIP(L, nip);
    cout << endl;

    jumlahPegawai(L);
    cout << endl;

    totalSalary(L);

    cout << endl;
    cout << "Masukkan NIP : ";
    cin >> nip;

    deleteData(L, nip);

    printList(L); */

    return 0;
}

