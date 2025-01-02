#include <iostream>
using namespace std;
 int main (){
// Porgram Pecahan Ratusan
 int number;
 int modRibuan ,modRatusan ,hRibuan ,hRatusan, hPuluhan , hSatuan, ribuan ,ratusan , puluhan,satuan ;
 cout << "===Pecahan Bilangan Ratusan===" << endl;
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

 cout << endl << "Output : " <<  endl << endl;
 cout << number << ": " << hRibuan <<" Ribuan, "<< hRatusan << " Ratusan, "<< hPuluhan << " Puluhan, "<< hSatuan << " satuan" << endl;
 cout << number << ": " << ribuan << " + " << ratusan << " + " << puluhan << " + " << satuan << endl;
 // Pecahan Ratusan end

 //KASUS 1
 cout << "\n\n";
cout << "=================================" <<"\n\n" ;
cout << "Nama Saya Mawar."<< endl;
cout << "Jurusan : Teknik Informatika" << endl;
cout << "Universitas : Universitas Dian Nuswantoro" << endl;

//KASUS 2
  cout << "nama saya Mawar" << endl;
  cout << "Saya dari Semarang" << endl;
  cout << "Kuliah di Udinus" << endl;

  //KASUS 3
  cout << "\n\n";
cout << "=================================" <<"\n\n" ;
  string nama;
  string jurusan;
  string universitas;
  cout << "Masukkan Nama:";
  getline(cin , nama);
  cout << "Masukkan Jurusan:";
  getline(cin ,jurusan);
  cout << "Masukkan Universitas: ";
  getline(cin , universitas);

  cout << "\n" << "=============================" << "\n";

  cout << "Nama saya: " << nama << endl;
  cout << "Jurusan: " << jurusan << endl;
  cout << "Universitas: " << universitas << endl;

  //Kasus 4
  cout << "\n\n";
cout << "=================================" <<"\n\n" ;
float a, b;
  cout << "Masukkan Bilangan A: ";
  cin >> a;

  cout << "Masukkan Bilangan B: ";
  cin >> b;
cout << "==========OUTPUT==========" << endl ;
  cout << a << "+" << b << "= " << a + b << endl;
  cout << a << "-" << b << "= " << a - b << endl;
  cout << a << "*" << b << "= " << a * b << endl;
  cout << a << "/" << b << "= " << a / b << endl;

//kasus 4.a true false
cout << "\n\n";
cout << "=================================" <<"\n\n" ;
int A = 3;
int B = 2;
cout << boolalpha;
cout << "Apakah A < B? = "<< (A < B) << endl;
cout << "Apakah A > B? = " << (A > B) << endl;
cout << "Apakah A <= B? = " << (A <= B) << endl;
cout << "Apakah A >= B? = " << (A >= B) << endl;
cout << "Apakah A = B? = " << (A == B) << endl;
cout << "Apakah A != B? = " << (A != B) << endl;
  return 0;
}






