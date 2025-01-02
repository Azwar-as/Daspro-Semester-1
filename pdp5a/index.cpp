#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    {
        // -----------> KASUS 1 <-----------
        cout << "\n=====> KASUS 1 <=====\n";
        int number;
        cout << "Masukkan angka integer: ";
        cin >> number;

        if (number > 0)
        {
            cout << number << " is a postive number" << endl;
            if (number % 2 == 0)
            {
                cout << "Also even number" << endl;
            }
            else
            {
                cout << "Also odd number" << endl;
            }
        }
        else if (number < 0)
        {
            cout << number << " is a negative number" << endl;
            if (number % 2 == 0)
            {
                cout << "Also even number" << endl;
            }
            else
            {
                cout << "Also odd number" << endl;
            }
        }
        else
        {
            cout << number << "is a zero number" << endl;
        }
    }

    {
        // -----------> KASUS 2 <-----------
        cout << "\n=====> KASUS 2 <=====\n";
        string jenis_Kendaraan;
        int jam, biaya, biaya_parkir;
        cout << "Masukkan jenis kendaraan anda : ";
        cin >> jenis_Kendaraan;
        cout << "Masukkan Total Jam Parkir: ";
        cin >> jam;
        if (jenis_Kendaraan == "s" || jenis_Kendaraan == "S")
        {
            biaya = 3000 * jam;
            if (jam > 12)
            {
                biaya = biaya + 50000;
                cout << "Jenis Kendaraan    : " << jenis_Kendaraan << endl;
                cout << "Total Jam Parkir   : " << jam << " Jam" << endl;
                cout << "Biaya normal       : 3.000/jam" << endl;
                cout << "Biaya menginap     : 50.000" << endl;
                cout << "Waktu parkir anda lebih dari 12 jam maka dikenakan biaya menginap" << endl;
                cout << "Total biaya anda adalah : " << biaya << endl;
            }
            else
            {
                cout << "Jenis Kendaraan    : " << jenis_Kendaraan << endl;
                cout << "Total Jam Parkir   : " << jam << " Jam" << endl;
                cout << "Biaya normal       : 3.000/jam" << endl;
                cout << "Total biaya anda adalah : " << biaya << endl;
            }
        }
        else if (jenis_Kendaraan == "m" || jenis_Kendaraan == "M")
        {
            biaya = 5000 * jam;
            if (jam > 12)
            {
                cout << "Jenis Kendaraan    : " << jenis_Kendaraan << endl;
                cout << "Total Jam Parkir   : " << jam << " Jam" << endl;
                cout << "Biaya normal       : 5.000/jam" << endl;
                cout << "Biaya menginap     : 75.000" << endl;
                cout << "Waktu parkir anda lebih dari 12 jam maka dikenakan biaya menginap" << endl;
                biaya = biaya + 75000;
                cout << "Maka total biaya anda adalah : " << biaya << endl;
            }
            else
            {
                cout << "Jenis Kendaraan    : " << jenis_Kendaraan << endl;
                cout << "Total Jam Parkir   : " << jam << " Jam" << endl;
                cout << "Biaya normal       : 5.000/jam" << endl;
                cout << "Total biaya anda adalah : " << biaya << endl;
            }
        }
        else if (jenis_Kendaraan == "b" || jenis_Kendaraan == "B" || jenis_Kendaraan == "t" || jenis_Kendaraan == "T")
        {
            biaya = 25000 * jam;
            if (jam > 8)
            {
                cout << "Jenis Kendaraan    : " << jenis_Kendaraan << endl;
                cout << "Total Jam Parkir   : " << jam << " Jam" << endl;
                cout << "biaya normal       : 25.000/jam" << endl;
                cout << "biaya menginap     : 250.000" << endl;
                cout << "Waktu parkir anda lebih dari 8 jam maka dikenakan biaya menginap" << endl;
                biaya = biaya + 250000;
                cout << "maka total biaya anda adalah : " << biaya << endl;
            }
            else
            {
                cout << "Jenis Kendaraan    : " << jenis_Kendaraan << endl;
                cout << "Total Jam Parkir   : " << jam << " Jam" << endl;
                cout << "Biaya normal       : 25.000/jam" << endl;
                cout << "Total biaya anda adalah : " << biaya << endl;
            }
        }
        else
        {
            cout << "input tidak Valid, Harap masukkan input kendaraan dengan benar \n\n";
        }
    }

    {
        // -----------> KASUS 3 <-----------
        cout << "\n=====> KASUS 3 <=====\n";
        int pilihan, jumlah, harga, hargaAwal;
        double diskon = 0, totalHarga = 0;
        string bonus = "";

        cout << "Pilih Produk yang akan dibeli: " << endl;
        cout << "1. Kertas A40 (Rp 55.000)" << endl;
        cout << "2. Tinta Epson INKQ (Rp 125.000)" << endl;
        cout << "3. Flashdisk SUNDRIVE 64GB (Rp 180.000)" << endl;
        cout << "Pilih Produk (1/2/3) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
        { // KERTAS A4
            harga = 55000;
            cout << "Masukkan jumlah Kertas yang dibeli : ";
            cin >> jumlah;
            if (jumlah >= 3 && jumlah <= 5)
            {
                diskon = 0.05;
            }
            else if (jumlah >= 6 && jumlah <= 10)
            {
                diskon = 0.10;
            }
            else if (jumlah >= 11 && jumlah <= 15)
            {
                diskon = 0.15;
            }
            else if (jumlah > 15)
            {
                diskon = 0.20;
                bonus = " + Free Boba Milk Tea";
            }
            hargaAwal = jumlah * harga;
            double totalDiskon = harga * jumlah * diskon;
            totalHarga = harga * jumlah - totalDiskon;
            cout << "Harga Awal                 : " << hargaAwal << endl;
            cout << "Diskon                     : " << diskon * 100 << "%" << bonus << endl;
            cout << "Total harga setelah diskon : Rp " << totalHarga << endl;
            break;
        }
        case 2:
        { // TINTA EPSON
            harga = 125000;
            cout << "Masukkan jumlah Tinta yang dibeli : ";
            cin >> jumlah;
            int potongan = 0;
            if (jumlah >= 3 && jumlah <= 10)
            {
                diskon = 0.10;
                bonus = " + Free 1 Tinta warna hitam";
            }
            else if (jumlah > 10)
            {
                potongan = 2000;
                diskon = 0.20;
                bonus = " + Free 1 Pack";
            }
            hargaAwal = jumlah * harga;
            double totalDiskon = hargaAwal * diskon;
            totalHarga = hargaAwal - totalDiskon;
            cout << fixed << setprecision(2);
            cout << "Harga Awal                 : " << hargaAwal << endl;
            cout << "Diskon                     : " << diskon * 100 << "%" << bonus << endl;
            cout << "Total harga setelah diskon : Rp " << totalHarga - potongan << endl;
            break;
        }
        case 3:
        { // FLASHDISK SUNDRIVE
            harga = 180000;
            int potongan = 0;
            cout << "Masukkan Jumlah flashdisk yang dibeli : ";
            cin >> jumlah;
            totalHarga = jumlah * harga;
            if (totalHarga >= 1800000 && totalHarga < 5000000)
            {
                potongan = 250000;
                bonus = " + FREE 1 mini bag";
            }
            else if (totalHarga > 5000000)
            {
                potongan = 750000;
                bonus = " + FREE 1 regular bag dan 1 Gantungan Kunci";
            }
            cout << fixed << setprecision(2);
            cout << "Harga Awal                    : " << totalHarga << endl;
            cout << "Diskon                        : " << potongan << bonus << endl;
            cout << "Total harga setelah di potong : " << totalHarga - potongan << endl;
        }
        default:
            cout << "Pilihan Tidak Valid, Harap masukkan input sesuai pilihan 1-3" << endl;
            break;
        }
    }
    return 0;
}