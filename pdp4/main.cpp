#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "=========> PDP4 KASUS 1 - 4 <=========" << endl;
    {
        /*===> KASUS 1 <===*/
        cout << "-----> KASUS 1 <-----" << endl;
        int number;
        cout << "Masukkan Angka: ";
        cin >> number;

        if (number >= 0)
        {
            cout << "Number " << number << " is Positive" << endl;
        }
        else
        {
            cout << "Number " << number << " is Negative Convert to Positive : " << number * (-1) << endl;
        }
    }

    /*===> KASUS 2 <===*/
    cout << "-----> KASUS 2 <-----" << endl;
    cout << "3 < 4          : " << (3 < 4) << endl;
    cout << "12.5 < 7.5     : " << (12.5 < 7.5) << endl;
    cout << "5 <= 3.14      : " << (5 <= 3.14) << endl;
    cout << "3 < false      : " << (3 < false) << endl;
    cout << "True == False  : " << (true == false) << endl;
    cout << "True != False  : " << (true != false) << endl;
    cout << "65 != A        : " << (65 != 'A') << endl;

    /*===> KASUS 3 <===*/
    cout << "-----> KASUS 3 <-----" << endl;
    int number, reversedNumber;
    cout << "Masukan Bilangan Integer 2 Digit: ";
    cin >> number;

    if (number >= 10 && number <= 99)
    {
        reversedNumber = (number % 10) * 10 + (number / 10);
        cout << "Bilangan Setelah Dibalik: " << reversedNumber << endl;
    }
    else if (number >= -99 && number <= -10)
    {
        reversedNumber = (abs(number) % 10) * 10 + (abs(number) / 10);
        reversedNumber = -reversedNumber;
        cout << "Bilangan Setelah Dibalik: " << reversedNumber << endl;
    }
    else
    {
        cout << "Bilangan tidak dua digit , tidak ada perubahan" << endl;
    }

    /*===> KASUS 4 <===*/
    cout << "-----> KASUS 4 <-----" << endl;
    float jam_kerja, upah, upah_regular, overpay, total_upah;
    upah = 50000;
    cout << "Masukkan Total Jam Kerja   : ";
    cin >> jam_kerja;
    upah_regular = jam_kerja * upah;

    if (jam_kerja > 40)
    {
        overpay = (jam_kerja - 40) * upah * 0.3;
    }
    total_upah = upah_regular + overpay;

    cout << fixed << setprecision(2);
    cout << "Upah reguler   : " << upah_regular << endl;
    cout << "Overpay        : " << overpay << endl;
    cout << "Total Upah     : " << total_upah << endl;
    return 0;
}