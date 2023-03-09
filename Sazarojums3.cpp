#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  if (c > a && c < b)
    cout << "ir";
  else
    cout << "nav";
}