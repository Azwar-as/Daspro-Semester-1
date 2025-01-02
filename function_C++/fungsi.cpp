#include <iostream>
using namespace std;
int luas_persegi_panjang(int panjang, int lebar)
{
    return panjang * lebar;
};
int main()
{
    int p, l, L;
    cout << "Masukkan Panjang : ";
    cin >> p;
    cout << "Masukkan Lebar : ";
    cin >> l;

    L = luas_persegi_panjang(p, l);
    cout << "Luas Persegin panjang : " << L << endl;
}