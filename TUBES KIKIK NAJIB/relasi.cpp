#include "relasi.h"

void deleteFirstParent(List_parent &L, address_parent &P) {
    address_child C;
    P = first(L);
    while(first(child(P)) != NIL){
        deleteFirst(child(P), C);
        delete C;
    }
    deleteFirst(L, P);
}
