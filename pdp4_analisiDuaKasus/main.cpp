#include <iostream>
using namespace std;

int main()
{
    cout << "==========> PDP 4 KASUS 1 - 4 <==========" << endl;

    /* ---> Kasus 1 <--- */
    cout << "-----> KASUS 1 <-----" << endl;
    int number;
    cout << "masukkan angka : ";
    cin >> number;
    if (number >= 0)
    {
        cout << "number " << number << " is Positive" << endl;
    }
    else
    {
        cout << "number " << number << " is Negative" << endl;
    }

    /* ---> Kasus 2 <--- */
    cout << "-----> KASUS 2 <-----" << endl;
    float nilai;
    cout << "Masukkan Nilai: ";
    cin >> nilai;
    if (nilai > 60 && nilai <= 100)
    {
        cout << "selamat anda lulus" << endl;
    }
    else if (nilai <= 60 && nilai >= 0)
    {
        cout << "Mohon maaf,ANDA tidak Lulus" << endl;
    }
    else
    {
        cout << "inputan anda salah" << endl;
    }

    /* ---> Kasus 3 <--- */
    cout << "-----> KASUS 3 <-----" << endl;
    int bil1, bil2;
    cout << "Masukkan Bilangan Pertama: ";
    cin >> bil1;
    cout << "Masukkan Bilangan Kedua: ";
    cin >> bil2;
    if (bil1 > bil2)
    {
        cout << bil1 << " Lebih besar dari " << bil2 << endl;
    }
    else if (bil2 > bil1)
    {
        cout << bil2 << " Lebih besar dari " << bil1 << endl;
    }
    else if (bil1 == bil2)
    {
        cout << bil1 << " Sama Dengan " << bil2 << endl;
    }

    return 0;
}
