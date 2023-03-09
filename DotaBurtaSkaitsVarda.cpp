#include <iostream>
using namespace std;
int main() {
  string str;
  char ch;
  cin >> str;
  cin >> ch;
  int cik = 0;
  for (int i = 0; i < str.length(); i++) {
    if (str.at(i) == ch)
      cik++;
  }
  cout << cik;
}