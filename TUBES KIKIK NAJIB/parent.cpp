#include "parent.h"

void createList(List_parent &L) {
    first(L) = NIL;
}

address_parent alokasi(infotype_parent x) {
    address_parent P;
    P = new elmlist_parent;
    info(P) = x;
    next(P) = NIL;
    prev(P) = NIL;
    createList(child(P));
    return P;
}

void insertFirst(List_parent &L, address_parent P) {
    if (first(L) == NIL) {
        first(L) = P;
        next(P) = P;
    } else {
        prev(P) = first(L);
        while(next(prev(P)) != first(L)) {
            prev(P) = next(prev(P));
        }
        next(P) = first(L);
        next(prev(P)) = P;
        first(L) = P;
    }
}

void insertLast(List_parent &L, address_parent P) {
    if (first(L) == NIL) {
        first(L) = P;
    } else {
        address_parent Q = first(L);
        while (next(Q) != NIL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void deleteFirst(List_parent &L, address_parent &P){
    P = first(L);
    if (next(first(L)) == NIL) {
        first(L) = NIL;
    }else{
        first(L) = next(first(L));
        prev(first(L)) = NIL;
        next(P) = NIL;
    }
}

void printInfo(List_parent L) {
    address_parent P = first(L);
    if(P != NULL){
        while(P != NULL) {
            cout << "Nama Mata Kuliah: " << info(P).namaMK << endl;
            cout << "Nama Kelas: " << info(P).namaKls << endl;
            cout << "Kuota Maksimal: " << info(P).kuotaMaks << endl;
            cout << "Jenis Mahasiswa: " << info(P).jenisMhs << endl;
            cout << endl;
            printInfo(child(P));
            P = next(P);
        }
    }else{
        cout << endl;
        cout <<"List Matkul Kosong!"<< endl;
        cout << endl;
    }
}

address_parent findElm(List_parent L, infotype_parent x) {
    /**
    * IS : List_parent L mungkin kosong
    * FS : mengembalikan elemen dengan info nim = x.nim,
    * FS : mengembalikan elemen dengan info = x,
           mengembalikan Nil jika tidak ditemukan
    */
    address_parent P = first(L);
    do {
        if(info(P).namaMK == x.namaMK) {
            return P;
        }
        P = next(P);
    } while(P != first(L));
    return NULL;
}

int selectMenu() {
    cout << "========== MENU ==========" << endl;
    cout << "1. Menambah Mata Kuliah" << endl;
    cout << "2. Menampilkan Mata Kuliah" << endl;
    cout << "3. Menambah Mahasiswa" << endl;
    cout << "4. Menampilkan Mahasiswa" << endl;
    cout << "5. Memasangkan Matkul dengan Mahasiswa" << endl;
    cout << "6. Memutuskan Matkul dengan Mahasiswa" << endl;
    cout << "7. Menampilkan Matkul beserta Mahasiswa" << endl;
    cout << "8. Menghapus Mata Kuliah Tertentu" << endl;
    cout << "9. Menghapus Mahasiswa Tertentu" << endl;
    cout << "10. Menghapus Matakuliah beserta Mahasiswanya" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan Menu: ";

    int input = 0;
    cin >> input;

    return input;
}

