#include <iostream>
#include "parent.h"
#include "child.h"

using namespace std;

int main()
{
    List_parent LP;
    List_child LC;
    address_parent P;
    address_child C;
    matkul x;
    mahasiswa y;
    createList(LP);

    /** insert parent */
    int n = 0;
    while (n < 2) {
        cout << "Masukkan Mata Kuliah: ";
        cin >> x.namaMK;
        cout << "Masukkan Nama Kelas: ";
        cin >> x.namaKls;
        cout << "Masukkan Jenis Mahasiswa: ";
        cin >> x.jenisMhs;
        cout << "Masukkan Kuota Maksimal: ";
        cin >> x.kuotaMaks;
        cout << endl;
        P = alokasi(x);
        insertFirst(LP, P);
        n++;
    }
    printInfo(LP);

    /** insert child */
    int i = 0;
    while (i < 2) {
        cout << "Masukkan Nama Mahasiswa: ";
        cin >> y.namaMhs;
        cout << "Masukkan NIM Mahasiswa: ";
        cin >> y.nimMhs;
        cout << "Masukkan Asal Kelas: ";
        cin >> y.asalKls;
        cout << "Masukkan Jenis Mahasiswa: ";
        cin >> y.jenisMhs;
        cout << endl;
        C = alokasi(y);
        insertFirst(LC, C);
        i++;
    }
    /*
    int k = 0;
    while (k < i) {
        if (info(P).jenisMhs == info(C).jenisMhs) {
            P = findElm(LP, x);
            C = findElm(child(P), y);
            insertFirst(child(P), C);
            P = next(P);
        }
    }
    */

    printInfo(LC);

    return 0;
}
