#include <iostream>

using namespace std;

int main() {
  int x, y;


  // operasi matematika dasar
  cout << "Masukkan dua bilangan: ";
  cin >> x >> y;

  int a = x + y;
  int b = x - y;
  int c = x * y;
  int d = x / y;  // jangan dibagi dengan 0

  cout << "Hasil penjumlahan: " << a << endl;
  cout << "Hasil pengurangan: " << b << endl;
  cout << "Hasil perkalian: " << c << endl;
  cout << "Hasil pembagian: " << d << endl;

  
  // operasi modulus
  cout << "Masukkan dua bilangan untuk operasi modulus: ";
  cin >> x >> y;
  cout << "Hasil modulus: " << x % y << endl;  // bisa juga menaruh operasi langsung di cout


  return 0;
}