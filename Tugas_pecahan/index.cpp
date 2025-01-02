#include <iostream>
using namespace std;
 int main (){
// Porgram Pecahan Bilangan Ribuan ,Ratusan ,puluhan , satuan
 int number;
 int modRibuan ,modRatusan ,hRibuan ,hRatusan, hPuluhan , hSatuan, ribuan ,ratusan , puluhan,satuan ;
 cout << "==========INPUT===========" << endl;
 cout << "Program Pecahan Bilangan Ribuan ,Ratusan ,Puluhan , Satuan" << endl;
 cout << "Masukan Nomor : ";
 cin >> number ;

 modRibuan = number % 1000;
 modRatusan = modRibuan % 100;
 hRibuan = number / 1000;
 hRatusan = modRibuan / 100;
 hPuluhan = modRatusan / 10;
 hSatuan = modRatusan % 10;
 ribuan = (number / 1000) * 1000;
 ratusan = (modRibuan / 100) * 100;
 puluhan = (modRatusan / 10)* 10;
 satuan = (modRatusan % 10) * 10;

 cout << "==========Output===========" <<  endl;
 cout << number << ": " << hRibuan <<" Ribuan, "<< hRatusan << " Ratusan, "<< hPuluhan << " Puluhan, "<< hSatuan << " satuan" << endl;
 cout << number << ": " << ribuan << " + " << ratusan << " + " << puluhan << " + " << satuan << endl;
 cout << "=============END===========" << endl;
 // Pecahan Ratusan end
}
