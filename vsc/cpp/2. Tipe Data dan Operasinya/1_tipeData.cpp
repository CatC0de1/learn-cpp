#include <iostream>

using namespace std;

int main() {
  // tipe data integer (tidak ada koma)
  // jika nilai adalah desimal, maka akan dibulatkan kebawah
  // jika nilai adalah selain angka, maka nilai = 0
  // pendefinisian tipe data variabel langsung dengan nilainya
  int x = 10;

  // bisa juga seperti ini, tipe data dan variable di awal disusul dengan nilai
  // jika terdapat dua variabel dengan nilai yang sama, maka yang dianggap adalah yang terakhir
  x = -20;
  cout << "contoh nilai tipe data integer   : " << x << endl;

  // tipe data float (bilangan desimal)
  float a = 0.5;
  cout << "contoh nilai tipe data float     : " << a << endl;

  // tipe data double (bilangan desimal yang lebih besar)
  double b = 3.14;
  cout << "contoh nilai tipe data double    : " << b << endl;

  // tipe data string (huruf, angka, bahkan simbol)
  string c = "Hello World";
  cout << "contoh nilai tipe data string    : " << c << endl;

  // tipe data char (sama seperti string, tetapi hanya satu karakter)
  char d = 'A';
  cout << "contoh nilai tipe data char      : " << d << endl;

  // tipe data boolean (true atau false)
  // jika di print/cout, maka akan menghasilkan 1 jika true dan 0 jika false
  bool e = true;
  cout << "contoh nilai tipe data boolean   : " << e << endl;

  // tipe data long (sebenernya sama dengan integer)
  long f = 12;
  
  // tipe data long long (bilangan bulat yang lebih besar)
  long long g = 300000000000000;
  cout << "contoh nilai tipe data long long : " << g << endl;

  // tipe data unsigned integer (integer positif)
  // tidak bisa menyimpan bilangan negatif dan memperpanjang rentang bilangan positif
  // bisa digunakan selain untuk bilangan bulat seperti float, double, long, long long
  unsigned int h = 271;
  cout << "contoh nilai tipe data unsigned  : " << h << endl;

  // input untuk memasukan nilai harus sesuai dengan tipe data
  // jika salah input, bisa error
  int y;
  cout << "\nMasukan nilai bilangan bulat :";
  cin >> y;
  cout << "Input yang kamu masukan      :" << y;

  return 0;
}



// dalam pendefinisian variable, setidaknya tipe data dan variable harus lebih dulu
// contoh pendefinisian error :

/*

cin >> z;
cout << z;
int z;

*/

// dalam program itu, z belum didefinisikan terlebih dahulu 
// sehingga sistem tidak dapat mengeksekusi perintah cin dan cout karena var z belum ada



// pendefinisian tipe data dan variable juga hanya boleh sekali saja
// contoh pendefinisian error :

/*

int z = 10;
cout << z;

int z = 11;
cout << z;

*/

// dalam program itu, terdapat konflik pendefinisian variable z selama dua kali
// solusinya harus membuat nama variable baru