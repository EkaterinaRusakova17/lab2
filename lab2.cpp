/************************************************************
* Русакова Екатерина Алексеевна, ПИ-231, вариант №16        *
* Share-Link: https://www.onlinegdb.com/online_c++_compiler *
* Тема: Программирование циклов с пред- и постусловием      *
*************************************************************/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  double H, h, v;

  cout << "Введите H= ";
  cin >> H;
  cout << "Введите h= ";
  cin >> h;
  cout << "Введите v= ";
  cin >> v;

  while ( (H > 2) && (H < 90) ); {
  double V = v * ( (log (H / h) * log (H / h) ) / (log (10 / h) * log (10 / h) ) );
  cout << "H= " << H << " V= " << V << endl;
  H += 2;
  }
  system ("pause");
  return 0;
}
