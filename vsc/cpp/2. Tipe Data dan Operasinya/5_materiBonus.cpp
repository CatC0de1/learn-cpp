// materi bonus, library cmath (operasi matematika tambahan)



#include <iostream>
#include <cmath>  // library untuk operasi matematika tambahan (pow, sqrt, dll)

using namespace std;

int main() {
  float x, y;


  // operasi akar kaudrat
  cout << "Masukkan bilangan untuk operasi akar kuadrat: ";
  cin >> x;

  float hasil_akar_kuadrat = sqrt(x);
  cout << "Akar kuadrat dari " << x << " adalah : " << hasil_akar_kuadrat << endl;


  // operasi akar kubik
  cout << "\nMasukkan bilangan utk operasi kubik: ";
  cin >> x;

  float hasil_akar_kubik = cbrt(x);
  cout << "Akar kubik dari " << x << " adalah : " << hasil_akar_kubik << endl;


  // operasi pangkat
  cout << "\nMasukkan dua bilangan untuk operasi pangkat: ";
  cin >> x >> y;  // dipisah dengan spasi atau enter (spasi lebih rapi)

  int hasil_pangkat = pow(x, y);  // x pangkat y
  cout << x << " pangkat " << y << " adalah: " << hasil_pangkat << endl;


  // pembulatan ke atas dan ke bawah
  cout << "\nMasukkan bilangan untuk pembulatan: ";
  cin >> x;

  int pembulatan_keatas = ceil(x);
  int pembulatan_kebawah = floor(x);
  cout << "Pembulatan ke atas dari " << x << " adalah: " << pembulatan_keatas << endl;
  cout << "Pembulatan ke bawah dari " << x << " adalah: " << pembulatan_kebawah << endl;


  // nilai absolute
  cout << "\nMasukkan bilangan untuk nilai mutlak: ";
  cin >> x;

  float nilai_absolute = fabs(x);  // abs() juga bisa tetapi hanya untuk int
  cout << "Nilai mutlak dari " << x << " adalah: " << nilai_absolute << endl;


  // eksponensial (e^x)
  cout << "\nMasukan nilai x untuk eksponensial(e^x): ";
  cin >> x;

  float eksponensial = exp(x);
  cout << "exp(" << x << ") = " << eksponensial << endl;


  // logaritma
  cout << "\nMasukan nilai x untuk logaritma natural(basis e) : ";
  cin >> x;
  cout << "Masukan nilai y untuk logaritma basis 10         : ";
  cin >> y;

  float log_natural = log(x);
  float log_basis_10 = log10(y);

  cout << "log(" << x << ") = " << log_natural << endl;
  cout << "log10(" << y << ") = " << log_basis_10 << endl;


  // trigonometri
  cout << "\nMasukan nilai x untuk sudut sin, cos, tan: ";
  cin >> x;

  float radians = x * M_PI / 180;  // konversi derajat ke radian
  cout << "sin(" << x << ") = " << sin(radians) << endl;
  cout << "cos(" << x << ") = " << cos(radians) << endl;
  cout << "tan(" << x << ") = " << tan(radians) << endl;
  

  // hipotenusa (menghitung panjang sisi miring segitiga siku-siku)
  cout << "\nMasukan dua bilangan untuk hipotenusa: ";
  cin >> x >> y;

  float hipotenusa = hypot(x, y);
  cout << "Panjang hipotenusa dari segitiga siku-siku dengan sisi " << x << " dan " << y << " adalah: " << hipotenusa << endl;


  // dll, masih banyak syntax lainnya dari library cmath
  // lengkapnya bisa dilihat di https://www.cplusplus.com/reference/cmath/


  return 0;
}