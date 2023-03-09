#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  int n_a;
  int n_c;
  a *= 20;
  b += a;
  b *= 12;
  c += b;
  n_a = c/100;
  n_c = c%100;
  cout<<n_a<<" "<<n_c;
  }