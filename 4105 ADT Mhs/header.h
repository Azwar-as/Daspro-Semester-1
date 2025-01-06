#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct mahasiswa
{
    string nim;
    string nama;
    float ipk;
} mhs;
void cetak(mhs m[], int n);
void input(mhs m[], int n);
// tidak perlu mhs &m[] karena berupa array, sudah memesan memori
float ipkMax(mhs m[], int n);
float ipkMin(mhs m[], int n);
string mhsIPKMax(mhs m[], int n); // return nama mhs nilai max
string mhsIPKMin(mhs m[], int n); // return nama mhs nilai min
float ipkMaxRec(mhs m[], int n);
float ipkMinRec(mhs m[], int n);

#endif // HEADER_H_INCLUDED
