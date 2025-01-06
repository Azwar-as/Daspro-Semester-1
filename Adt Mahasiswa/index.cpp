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

int main()
{
    mhs dasPro[40];
    int i, n;
    cout << "Masukkan berapa mahasiswa yang akan diinput = ";
    cin >> n;
    for (i = 0; i < n; i++)
    { // INPUT

        input(dasPro, n);
        cout << endl;

        cetak(dasPro, n);

        int menu, iMin, iMax, urutan;
        float maxx, minn, ipk_baru;
        char lanjut;

        do
        {
            cout << "Menu\n1. Tampil data\n2. Analisa\n3. Ganti IPK\nMasukkan pilihan menu : ";
            cin >> menu;
            if (menu == 1)
            {
                cout << "-------------------------------\n";
                cout << "| No | NIM \t| Nama \t| IPK |\n";
                cout << "-------------------------------\n";
                for (i = 0; i < n; i++)
                { // OUTPUT
                    cout << "| " << i + 1 << "  | " << dasPro[i].nim << "  | " << dasPro[i].nama << " | " << dasPro[i].ipk << " | " << endl;
                }
                cout << "-------------------------------\n";
            }
            else if (menu == 2)
            {
                maxx = 0;
                minn = 5;
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
                cout << "IPK tertinggi adalah " << maxx << " milik " << dasPro[iMax].nama << endl;
                cout << "IPK terendah adalah " << minn << " milik " << dasPro[iMin].nama << endl;
            }
            else if (menu == 3)
            {
                do
                {
                    cout << "Masukkan urutan [1-" << n << "] : ";
                    cin >> urutan; // do while agar input 1-n
                } while (urutan < 1 || urutan > n); // jika inputan di luar 1-n, maka looping lagi
                cout << "IPK " << dasPro[urutan - 1].nama << " sebelumnya adalah " << dasPro[urutan - 1].ipk << endl;
                do
                {
                    cout << "Masukkan IPK baru [0-4]: ";
                    cin >> ipk_baru; // do while agar input 0-4
                } while (ipk_baru < 0 || ipk_baru > 4); // jika inputan di luar 0-4, maka looping lagi
                dasPro[urutan - 1].ipk = ipk_baru; // update IPK
            }
            else
            {
                cout << "Pilihan menu salah\n";
            }

            cout << "\nApakah ingin lanjut (y/n)? ";
            cin >> lanjut;
        } while (lanjut == 'y' || lanjut == 'Y');

        return 0;
    }
}

// INI DI BAWAH INT MAIN
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

void input(mhs m[], int n) // variabel formal
{
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