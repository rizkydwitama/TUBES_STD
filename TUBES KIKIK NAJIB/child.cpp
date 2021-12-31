#include "child.h"

void createList(List_child &L) {
    first(L) = NULL;
}

address_child alokasi(infotype_child x) {
    address_child P = new elmlist_child;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst(List_child &L, address_child P) {
    if(first(L) == NULL) {
        first(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void deleteFirst(List_child &L, address_child &P){
    P = first(L);
    if (next(first(L)) == NIL) {
        first(L) = NIL;
    }else{
        first(L) = next(first(L));
        prev(first(L)) = NIL;
        next(P) = NIL;
    }
}

void insertLast(List_child &L, address_child P) {
    if (first(L) == NIL) {
        first(L) = P;
    } else {
        address_child Q = first(L);
        while (next(Q) != NIL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void printInfo(List_child L) {
    address_child P = first(L);
    while(P != NULL) {
        cout<<"->";
        cout<<"Nama Mahasiswa: "<<info(P).namaMhs<<endl;
        cout<<"NIM Mahasiswa: "<<info(P).nimMhs<<endl;
        cout<<"Asal Kelas: "<<info(P).asalKls<<endl;
        cout<<"Jenis Mahasiswa: "<<info(P).jenisMhs<<endl;
        cout<<endl;
        P = next(P);
    }
}

address_child findElm(List_child L, infotype_child x) {
    address_child P = first(L);
    while(P != NULL) {
        if(info(P).namaMhs == x.namaMhs) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void insertAfter(address_child Prec, address_child P) {
    prev(next(Prec)) = P;
    next(P) = next(Prec);
    prev(P) = Prec;
    next(Prec) = P;
}
