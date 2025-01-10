#include <iostream>

using namespace std;

int main() {
  int x, y;


  // operasi increment & decrement
  cout << "Masukan input x : ";
  cin >> x;

  y = x++;  // increment, ditambah 1
  cout << "Increment dari x = " << y << endl;

  y = x--;  // decrement, dikurang 1
  cout << "Decrement dari x = " << y << endl;


  // operasi assigment (=)
  // bisa diterapkan pada operasi dasar lain seperti (=) (-) (*) (/) (%) 
  cout << "\nMasukan input x : ";
  cin >> x;

  x += 5;  // x = x + 5
  cout << "Penjumlahan assigment dari x adalah : " << x << endl;


  return 0;
}