#include <iostream>
#include <string>
using namespace std;

typedef struct mahasiswa
{
    string nim, nama;
    float ipk;
} mhs;

int main()
{
    mhs dasPro[40];
    int n, i;

    cout << "Berapa mahasiswa yang ingin diinput? ";
    cin >> n;

    for (i = 0; i < n; i++)
    {                                              // INPUT
        cout << "Mahasiswa ke-" << i + 1 << ":\n"; // i+1 hanya display saja
        cout << "Masukkan NIM: ";
        cin >> dasPro[i].nim;
        cout << "Masukkan Nama: ";
        cin >> dasPro[i].nama;
        do
        {
            cout << "Masukkan IPK [0-4]: ";
            cin >> dasPro[i].ipk;
        } while (dasPro[i].ipk < 0 || dasPro[i].ipk > 4); // jika inputan di luar 0-4, maka minta input lagi
    }

    cout << "\n------------------------------------------\n";
    cout << " No | NIM\t Nama\t IPK\n";
    cout << "------------------------------------------\n";

    for (i = 0; i < n; i++)
    { // OUTPUT
        cout << " " << i + 1 << " | " << dasPro[i].nim << "\t" << dasPro[i].nama << "\t" << dasPro[i].ipk << "\n";
    }

    int menu;
    cout << "\nPilih menu:\n1. Tampilkan data\n2. IPK tertinggi dan terendah\n3. Ubah IPK\nPilihan: ";
    cin >> menu;

    if (menu == 2)
    {
        float maxx = 0, minn = 4;
        int iMax = 0, iMin = 0;

        for (i = 0; i < n; i++)
        {
            if (dasPro[i].ipk > maxx)
            {
                maxx = dasPro[i].ipk;
                iMax = i;
            }
            if (dasPro[i].ipk < minn)
            {
                minn = dasPro[i].ipk;
                iMin = i;
            }
        }

        cout << "IPK tertinggi adalah " << maxx << " dimiliki " << dasPro[iMax].nama << endl;
        cout << "IPK terendah adalah " << minn << " dimiliki " << dasPro[iMin].nama << endl;
    }
    else if (menu == 3)
    {
        int urutan;
        float ipkBaru;

        cout << "Masukkan urutan [1-" << n << "]: ";
        cin >> urutan;
        cout << "IPK " << dasPro[urutan - 1].nama << " sebelumnya adalah " << dasPro[urutan - 1].ipk << endl;
        cout << "Masukkan IPK baru [0-4]: ";
        cin >> ipkBaru;

        if (ipkBaru >= 0 && ipkBaru <= 4)
        {
            dasPro[urutan - 1].ipk = ipkBaru;
        }
        else
        {
            cout << "Inputan Salah.\n";
        }
    }
    else
    {
        cout << "Pilihan tidak valid.\n";
    }

    char pilih;
    do
    {
        cout << "\nApakah ingin melanjutkan (y/n)? ";
        cin >> pilih;
    } while (pilih == 'Y' || pilih == 'y');

    cout << "Terima Kasih karena sudah menggunakan layanan Kami!" << endl;
    cout << "Data anda sudah tersimpan!" << endl;

    return 0;
}
