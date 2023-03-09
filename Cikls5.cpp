#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a;
  cin >> b;
  int cik = 0;
  for (int i = a; i <= b; i++) {
    cik += i;
  }
  cout << cik;
}