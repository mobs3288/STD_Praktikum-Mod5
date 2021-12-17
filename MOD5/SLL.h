#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P)     (P) -> info
#define next(P)     (P) -> next
#define first(L)    ((L).first)
#define nil NULL

struct pegawai {
    string nama;
    string nip;
    int gaji;
};

typedef pegawai infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList_1301204289(List &L);
infotype newPegawai_1301204289(string nama, string nip, int gaji);
address newElement_1301204289(infotype dataBaru);
void insertLast_1301204289(List &L, address P);
address deleteFirst_1301204289(List &L);
address deleteLast_1301204289(List &L);
address deleteAfter_1301204289(address prec);
void addNdata_1301204289(List &ListPeg);
address printList_1301204289(List L);
address searchByNIP_1301204289(List ListPeg, string nip);
int jumlahPegawai_1301204289(List ListPeg);
float totalSalary_1301204289(List ListPeg);
void deleteData_1301204289(List &ListPeg, string nip);
void SearchGaji_1301204289(List L);


#endif // SLL_H_INCLUDED

