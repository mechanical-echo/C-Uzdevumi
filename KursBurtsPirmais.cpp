#include <iostream>
using namespace std;
int main() {
  string str;
  char a, b;
  cin >> str;
  cin >> a;
  cin >> b;
  int x_a = str.length();
  int x_b = str.length();

  for (int i = 0; i < str.length(); i++) {
    if (str.at(i) == a && x_a == str.length())
      x_a = i;
    if (str.at(i) == b && x_b == str.length())
      x_b = i;
  }

  if (x_a < x_b) {
    cout << a;
  } else
    cout << b;
}