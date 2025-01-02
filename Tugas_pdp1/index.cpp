#include <iostream>
using namespace std;
 int main (){
 //KASUS 1
  cout << "\n\n";
  cout << "==========OUTPUT===KASUS1==========" <<endl;
  cout << "Nama Saya Mawar."<< endl;
  cout << "Jurusan : Teknik Informatika" << endl;
  cout << "Universitas : Universitas Dian Nuswantoro" << endl;
  cout << "==========KASUS1===END=============" <<"\n\n" ;

//KASUS 2
  cout << "==========OUTPUT===KASUS2==========" <<endl ;
  cout << "nama saya Mawar" << endl;
  cout << "Saya dari Semarang" << endl;
  cout << "Kuliah di Udinus" << endl;
  cout << "==========KASUS2===END=============" <<"\n\n" ;


  //KASUS 3
  cout << "==========INPUT===KASUS3===========" <<endl ;
  string nama;
  string jurusan;
  string universitas;
  cout << "Masukkan Nama:";
  getline(cin , nama);
  cout << "Masukkan Jurusan:";
  getline(cin ,jurusan);
  cout << "Masukkan Universitas: ";
  getline(cin , universitas);
  cout << "==========OUTPUT===KASUS3==========" << endl;
  cout << "Nama saya: " << nama << endl;
  cout << "Jurusan: " << jurusan << endl;
  cout << "Universitas: " << universitas << endl;
  cout << "==========KASUS3===END=============" <<"\n\n" ;


  //Kasus 4
  cout << "==========INPUT===KASUS4===========" <<endl;
  float a, b;
  cout << "Masukkan Bilangan A: ";
  cin >> a;
  cout << "Masukkan Bilangan B: ";
  cin >> b;
  cout << "==========OUTPUT===KASUS4==========" << endl ;
  cout << "A = " << a << endl << "B = " << b << endl;
  cout << a << "+" << b << " = " << a + b << endl;
  cout << a << "-" << b << " = " << a - b << endl;
  cout << a << "*" << b << " = " << a * b << endl;
  cout << a << "/" << b << " = " << a / b << endl;
  cout << "==========KASUS4===END==============" <<"\n\n" ;


//kasus 4.a true false
  cout << "==========INPUT===KASUS4.a==========" <<endl ;
  int A;
  int B;
  cout << "True Or False Program"<< endl;

  cout << "Masukkan Nilai A = ";
  cin >> A;
  cout << "Masukkan Nilai B = ";
  cin >> B;
  cout << "==========OUTPUT===KASUS4.a==========" << endl ;
  cout << "Apakah A  < B? = "<< (A < B) << endl;
  cout << "Apakah A  > B? = " << (A > B) << endl;
  cout << "Apakah A <= B? = " << (A <= B) << endl;
  cout << "Apakah A >= B? = " << (A >= B) << endl;
  cout << "Apakah A  = B? = " << (A == B) << endl;
  cout << "Apakah A != B? = " << (A != B) << endl;
  cout << "==========KASUS4.a===END============" <<"\n\n" ;
  return 0;
}






