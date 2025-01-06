#include "header.h"

// INI DI BAWAH INT MAIN
float ipkMax(mhs m[], int n) // rekursif
{
    float maxx = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[i].ipk > maxx)
            maxx = m[i].ipk;
    }
    return maxx;
}
float ipkMaxRec(mhs m[], int n)
{
    if (n == 1)
    {
        return m[0].ipk;
    }
    else
    {
        return max(m[n - 1].ipk, ipkMaxRec(m, n - 1));
    }
}
float ipkMinRec(mhs m[], int n)
{
    if (n == 1)
        return m[0].ipk;
    else
        return min(m[n - 1].ipk, ipkMinRec(m, n - 1));
}

float ipkMin(mhs m[], int n) // rekursif
{
    float minn = 5;
    for (int i = 0; i < n; i++)
    {
        if (m[i].ipk < minn)
            minn = m[i].ipk;
    }
    return minn;
}
string mhsIPKMax(mhs m[], int n)
{
    float maxx = 0;
    int iMax;
    for (int i = 0; i < n; i++)
    {
        if (m[i].ipk > maxx)
        {
            maxx = m[i].ipk;
            iMax = i;
        }
    }
    return m[iMax].nama;
}

string mhsIPKMaxRec(mhs m[], int n)
{
    if (n == 1)
    {
        return m[0].nama;
    }
    else
    {
        if (m[n - 1].ipk > ipkMaxRec(m, n - 1))
            return m[n - 1].nama;
        else
            return mhsIPKMaxRec(m, n - 1);
    }
}

string mhsIPKMin(mhs m[], int n)
{
    float minn = 5;
    int iMin;
    for (int i = 0; i < n; i++)
    {
        if (m[i].ipk < minn)
        {
            minn = m[i].ipk;
            iMin = i;
        }
    }
    return m[iMin].nama;
}
void input(mhs m[], int n)
{
    // copy koding input lalu ganti dasPro dengan m
    // proses input di dalam int main ganti input(dasPro, n);
    // RUN sampai tidak ada eror
    for (int i = 0; i < n; i++)
    { // INPUT
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan NIM       = ";
        cin >> m[i].nim;
        cout << "Masukkan Nama      = ";
        cin >> m[i].nama;
        do
        {
            cout << "Masukkan IPK [0-4] = ";
            cin >> m[i].ipk;
        } while (m[i].ipk < 0 || m[i].ipk > 4); // jika inputan di luar 0-4, maka looping lagi
    }
}
void cetak(mhs m[], int n) // variabel formal
{
    cout << "-------------------------------\n";
    cout << "| No | NIM \t| Nama \t| IPK |\n";
    cout << "-------------------------------\n";
    for (int i = 0; i < n; i++)
    { // OUTPUT
        cout << "| " << i + 1 << "  | " << m[i].nim << "  | " << m[i].nama << " | " << m[i].ipk << " | " << endl;
    }
    cout << "-------------------------------\n";
}
