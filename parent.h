#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <iostream>
using namespace std;

#include "child.h"

#define first(L) L.first
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define child(P) P->child
#define NIL NULL

struct matkul {
    string namaMK, namaKls, jenisMhs;
    int kuotaMaks;
};

typedef matkul infotype_parent;
typedef struct elmlist_parent *address_parent;

struct elmlist_parent {
    infotype_parent info;
    address_parent next;
    address_parent prev;
    /** list child **/

    List_child child;
};


struct List_parent {
    address_parent first;
};


/** TIDAK PERLU MODIFIKASI */

void createList(List_parent &L);
void insertFirst(List_parent &L, address_parent P);
void insertAfter(List_parent &L, address_parent Prec, address_parent P);
void insertLast(List_parent &L, address_parent P);
void deleteFirst(List_parent &L, address_parent &P);
void deleteLast(List_parent &L, address_parent &P);
void deleteAfter(List_parent &L, address_parent Prec, address_parent &P);
int selectMenu();


/** PERLU MODIFIKASI */

address_parent alokasi(infotype_parent x);
void dealokasi(address_parent &P);
address_parent findElm(List_parent L, infotype_parent x);
void printInfo(List_parent L);


#endif // PARENT_H_INCLUDED
