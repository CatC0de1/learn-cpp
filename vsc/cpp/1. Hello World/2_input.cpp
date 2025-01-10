#include <iostream>

using namespace std;

int main() {
  string nama;  // pendefinisian variable nama dengan tipe data string
  cout << "Masukkan input: ";
  cin >> nama;  // input variable nama

  // hasilnya akan terlihat jelas di terminal
  cout << "Halo," << endl;
  cout << "Selamat pagi " << nama;
  return 0;
}