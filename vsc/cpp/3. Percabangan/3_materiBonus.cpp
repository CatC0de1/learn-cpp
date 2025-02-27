// materi bonus, conditional switch case

#include <iostream>

using namespace std;

int main() {
  int x;
  cout << "Masukkan angka bulat: ";
  cin >> x;

  // switch case digunakan untuk membandingkan nilai dari sebuah variabel dengan beberapa nilai konstan
  // jika nilai variabel sama dengan salah satu nilai konstan, maka statement di dalam case tersebut akan di eksekusi
  // jika tidak ada case yang sesuai, maka statement di dalam default akan di eksekusi
  switch (x) {
    case 1:  // jika x == 1, maka statement di dalam case 1 akan di eksekusi
      cout << "satu";
      break;  // break digunakan untuk menghentikan eksekusi switch case
    case 2:  // jika x == 2, maka statement di dalam case 2 akan di eksekusi
      cout << "dua";
      break;
    case 3:  // dan seterusnya
      cout << "tiga";
      break;
    case 4:
      cout << "empat";
      break;
    case 5:
      cout << "lima";
      break;
    default:  // jika x tidak sama dengan case manapun, maka statement di dalam default akan di eksekusi
      cout << "angka lebih dari 5 atau kurang dari 1";
  }

  return 0;
}