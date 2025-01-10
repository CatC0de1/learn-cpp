#include <iostream>

using namespace std;

int main() {
  int x;
  cout << "Masukkan angka: ";
  cin >> x;

  cout << x << " adalah ";

  // jika if pertama true, maka else if selanjutnya tidak akan dijalankan
  // jika if pertama false, maka else if selanjutnya akan dijalankan, dan seterusnya
  // jika semua false, maka else akan dijalankan
  if (x == 0) {
    cout << "bilangan nol";
  } else if (x > 0) { 
    cout << "bilangan bulat positif";
  } else {
    cout << "bilangan bulat negatif";
  }

  return 0;
}