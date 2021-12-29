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

void printInfo(List_child L) {
    address_child P = first(L);
    while(P !=NULL) {
        cout<<"->"<<info(P).namaMhs<<endl;
        cout<<"->"<<info(P).nimMhs<<endl;
        cout<<"->"<<info(P).asalKls<<endl;
        cout<<"->"<<info(P).jenisMhs<<endl;
        P = next(P);
    }
}

address_child findElm(List_child L, infotype_child x) {
    address_child P = first(L);
    while(P != NULL) {
        if(info(P).jenisMhs == x.jenisMhs) {
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
