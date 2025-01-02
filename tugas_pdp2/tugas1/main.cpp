#include <iostream>
#include <cmath>
using namespace std;

int main(){
{
//============ KASUS 1 =====================
    cout << " *KASUS 1* " << endl;
    cout << " M.Azwar Anshari"<< endl;
    float a = 10;
    float b = 5;

    cout << " A = " << a << endl;
    cout << " B = " << b << endl;

    cout << " hasil A + B: "<< a+b << endl;
    cout << " hasil A - B: "<< a-b << endl;
    cout << " hasil A * B: "<< a*b << endl;
    cout << " hasil A / B: "<< a/b << endl;
}




{
 // =============== KASUS 2 ==================
    cout << "\n\n *KASUS 2* " << endl;
    float a = 10;
    float b = 6;


    cout << " A : " << a << endl;
    cout << " B : " << b << endl;

    cout << " hasil A + B: " << a+b << endl;
    cout << " hasil A - B: " << a-b << endl;
    cout << " hasil A * B: " << a*b << endl;
    cout << " hasil A / B: " << a/b << endl;

 /* Pada kasus ini hasil yang di peroleh sudah sesuai
  karena pada pembagian menghasilkan angka desimal
  maka saya menggunakan tipe data float yang mendukung
  angka desimal*/
}



{
// ================== KASUS 3 NO.1 ==================
    cout << "\n\n *KASUS(3) NO.1* " << endl;
    int a;
    cout << " Masukkan Nilai A: ";
    cin >> a;
    int y = pow(a, 3) + 7;
    cout << " Hasil Y = " << a << "^3 + 7 : " << y << endl;
}


{
// ================== KASUS 3 NO.2 ==================
    cout << "\n\n *KASUS(3) NO.2* " << endl;
    float a,b,c,x;
    cout << " Masukkan Nilai A: ";
    cin >> a;
    cout << " Masukkan Nilai B: ";
    cin >> b;
    cout << " Masukkan Nilai C: ";
    cin >> c;
    cout << " Masukkan Nilai X: ";
    cin >> x;
    float y = a * pow(x, 2) + b * x + c;
    cout << " Hasil Y = " << a << "x^2 + " << b << "x + " << c << endl;
    cout << " Dengan Nilai X = " << x << endl;
    cout << " Maka Hasil Y = " << y << endl;
 }


{
// ================== KASUS 3 NO.3 ==================
    cout << "\n\n *KASUS(3) NO.3* " << endl;
    float bil1,bil2,bil3,bil4,bil5;
    float jumlah, rata_rata;

    cout << "Masukkan Bilangan 1 : ";
    cin >> bil1;
    cout << "Masukkan Bilangan 2 : ";
    cin >> bil2;
    cout << "Masukkan Bilangan 3 : ";
    cin >> bil3;
    cout << "Masukkan Bilangan 4 : ";
    cin >> bil4;
    cout << "Masukkan Bilangan 5 : ";
    cin >> bil5;

    jumlah = bil1 + bil2 + bil3 + bil4 + bil5;

    rata_rata = jumlah/5;

    cout << "Jumlah dari 5 Bilangan = " << jumlah << endl;
    cout << "Rata-Rata dari 5 Bilangan = " << rata_rata << endl;
}


{
// ================== KASUS 3 NO.4 ==================
    cout << "\n\n *KASUS(3) NO.4* " << endl;

    cout << " ---> Celcius To Fahrenheit <--- " << endl;
    float F,C;
    cout << " Masukkan Suhu Dalam Celcius : ";
    cin >> C;
    F = (9.0/5.0) * C + 32;
    cout << " Suhu Dalam Fahrenheit: " << F << "\n\n";
}

{
    cout << " ---> Celcius To Kelvin <--- " << endl;
    float K,C;
    cout << " Masukkan Suhu dalam celcius : ";
    cin >> C;
    K = C + 273;
    cout << " Suhu dalam Kelvin: " << K << "\n\n";
}

{
    cout << " ---> Celcius To Reamur <--- " << endl;
    float C,R;
    cout << "Masukkan Suhu dalam celcius : ";
    cin >> C;
    R = C * 4.0/5.0;
    cout << "Suhu dalam Reamur: " << R << endl;
}

/* Pada seluruh kasus ini saya menggunakan scope agar penggunaan variable
   yang berulang seperti a,b pada setiap kasus, Bisa digunakan secara berulang
   disetiap kasusnya agar sesuai dengan perintah yang ada pada soal pdp2 */
    return 0;
}
