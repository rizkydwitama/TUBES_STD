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

/*
void printAjah(List_parent LP, List_child LC){
    address_parent P;
    address_child C;

    P = first(LP);
    cout<<"===LIST RELASI==="<<endl;
    while(P != NULL){
        cout<<endl;
        cout<<"Nama Mata Kuliah : "<<info(P).namaMK<<endl;
        cout<<"Jenis Mahasiswa : "<<info(P).jenisMhs<<endl;
        C = first(LC);
        while(C != NULL){
            if(child(P) == C){ ///error disini gaess
                cout<<endl;
                cout<<"Nama Mahasiswa : "<<info(C).namaMhs<<endl;
                cout<<"Jenis Mahasiswa : "<<info(C).jenisMhs<<endl;
            }
            C = next(C);
        }
        cout<<endl;
        P = next(P);
    }
    cout<<endl;
}
*/
