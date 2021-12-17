#include "SLL.h"

// Fungsi untuk membuat list
void createList_1301204289(List &L) {
    first(L) = nil;
}

// Fungsi untuk membuat tipe data baru yg bernama newPegawai
infotype newPegawai_1301204289(string nama, string nip, int gaji) {
    infotype pegawai;

    pegawai.nama = nama;
    pegawai.nip = nip;
    pegawai.gaji = gaji;

    return pegawai;
}

// Memasukkan data ke elemen linked list
address newElement_1301204289(infotype dataBaru) {
    address P = new elmList;
    info(P) = dataBaru;
    next(P) = nil;

    return P;
}

// Fungsi untuk memasukan data pada urutan terakhir
void insertLast_1301204289(List &L, address P) {
    address Q;

    if (first(L) == nil) {
        first(L) = P;
    } else {
        Q = first(L);

        while (next(Q) != nil) {
            Q = next(Q);
        }
        next(Q) = P;
    }

}

// Fungsi untuk menghapus data pertama
address deleteFirst_1301204289(List &L) {
    address P = first(L);

    if (next(first(L)) == nil) {
        first(L) = nil;
    } else {
        first(L) = next(first(L));
    }
    next(P) = nil;

    return P;
}

// Fungsi untuk menghapus data terakhir
address deleteLast_1301204289(List &L) {
    address P;
    address Q;

    if (first(L) == nil) {
        cout << "LIST KOSONG" << endl;
        P = nil;
    } else if (next(first(L)) == nil) {
        P = first(L);
        first(L) = nil;
    } else {
        Q = first(L);
        while (next(next(Q)) != nil) {
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = nil;
    }

    return P;
}

// Fungsi untuk menghapus data setelah yang di tentukan
address deleteAfter_1301204289(address prec) {
    address P;

    P = next(prec);
    next(prec) = next(P);
    next(P) = nil;

    return P;
}

// Fungsi untuk memasukkan data sebanyak N
void addNdata_1301204289(List &ListPeg) {
    int jumlah;string nama;
    string nip;
    int gaji;

    address P;
    infotype pgw;

    createList_1301204289(ListPeg);

    cout << "Masukkan jumlah data : ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "Nama : ";
        cin >> nama;

        cout << "NIP  : ";
        cin >> nip;

        cout << "Gaji : ";
        cin >> gaji;

        pgw = newPegawai_1301204289(nama, nip, gaji);
        P = newElement_1301204289(pgw);
        insertLast_1301204289(ListPeg,P);

        cout << endl;
    }
}

// Fungsi untuk menampilkan seluruh data di layar
address printList_1301204289(List L) {
    address P;
    int i = 1;

    if (first(L) != nil) {
        P = first(L);

        while (P != nil) {
            cout << "[" << i << "]" << endl;
            cout << "Nama : " << info(P).nama << endl;
            cout << "NIM  : " << info(P).nip << endl;
            cout << "IPK  : " << info(P).gaji << endl;

            i++;
            P = next(P);
        }
    } else {
        cout << "List Kosong" << endl;
    }

    return P;
}

// Fungsi untuk menampilkan data di layar sesuai dengan nip yg dicari, nip di input oleh user
address searchByNIP_1301204289(List ListPeg, string nip) {
    address P;
    int i = 1;

    if (first(ListPeg) != nil) {
        P = first(ListPeg);

        while (P != nil) {
            if (nip == info(P).nip) {
                cout << "[" << i << "]" << endl;
                cout << "Nama : " << info(P).nama << endl;
                cout << "NIP  : " << info(P).nip << endl;
                cout << "Gaji  : " << info(P).gaji << endl;
            }
            i++;
            P = next(P);
        }
    } else {
        cout << "List Kosong" << endl;
    }

    return P;
}

// Fungsi untuk menghitung jumlah pegawai
int jumlahPegawai_1301204289(List ListPeg) {
    address P;
    int i = 0;

    if (first(ListPeg) != nil) {
        P = first(ListPeg);

        while (P != nil) {
            i++;
            P = next(P);
        }
    } else {
        cout << "List Kosong" << endl;
    }

    return i;
}

// Fungsi untuk menghitung total gaji dari seluruh pehawai yang ada
float totalSalary_1301204289(List ListPeg) {
    address P;
    float totGaji = 0;

    if (first(ListPeg) != nil) {
        P = first(ListPeg);

        while (P != nil) {
            totGaji = totGaji + info(P).gaji;
            P = next(P);
        }
    } else {
        cout << "List Kosong" << endl;
    }

    return totGaji;
}

// Fungsi untuk menghapus data dengan nip yang di tentukan
void deleteData_1301204289(List &ListPeg, string nip) {
    address P;
    address temp;
    int i = 1;

    if (first(ListPeg) != nil) {
        P = first(ListPeg);

        while (P != nil) {
            if (info(P).nip == nip) {
                if (next(first(ListPeg)) == next(P)){ // Kondisi apa bila data yang akan di hapus adalah data pertama
                    deleteFirst_1301204289(ListPeg);
                } else if (next(P) != nil) { // Kondisi apa bila data yang akan di hapus berada di tengah tidak awal dan akhir
                    deleteAfter_1301204289(temp);
                } else if (next(P) == nil) { // Kondisi apa bila data yang akan di hapus berada di akhir
                    deleteLast_1301204289(ListPeg);
                }
            } else {
                temp = P;
            }
            i++;
            P = next(P);
        }
    } else {
        cout << "List Kosong" << endl;
    }
}

// Fungsi untuk mencari pegawai dengan gaji tertinggi
void SearchGaji_1301204289(List L) {
    address P;
    string nama;
    string tempNama;
    int gaji;

    if (first(L) != nil) {
        P = first(L);
        nama = info(P).nama;
        gaji = info(P).gaji;

        while (P != nil) {
            if (gaji < info(P).gaji) {
                nama = info(P).nama;
                gaji = info(P).gaji;
            }
            P = next(P);
        }
    } else {
        cout << "List Kosong" << endl;
    }

    cout << "Pegawai dengan Gaji Tertinggi adalah : " << nama << endl;
}
