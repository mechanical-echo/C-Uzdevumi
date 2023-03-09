#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a;
  cin >> b;
  // 2 5
  int ab = a * b;      // 10
  a = (a < b) ? a : b; // 2>5 ? yes => a=2
  b = ab / a;          // b=10/2 = 5

  for (int i = 0; i < b; i++) {
    cout << a << "\n";
  }
}