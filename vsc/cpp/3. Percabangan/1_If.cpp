#include <iostream>

using namespace std;

int main() {
  bool condition = true;  // variable condition bertipe boolean dengan nilai true

  // jika kondisi benar, maka statement di dalam blok if akan di eksekusi
  // jika kondisi salah, maka statement di dalam blok if tidak akan di eksekusi
  if (condition) {
    cout << "kondisi benar, conditional true di eksekusi" << endl;
  }

  return 0;
}



// jika ingin mengecek kondisi yang salah, maka bisa menggunakan operator negasi (!)
// operator negasi (!) digunakan untuk membalikkan nilai boolean
// contoh: !true = false, !false = true

/*

if (!condition) {
  cout << "kondisi benar, conditional false di eksekusi" << endl;
}
  
*/