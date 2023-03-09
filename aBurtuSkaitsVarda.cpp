#include <iostream>
using namespace std;
int main() {
  string a;
  cin >> a;
  int cik = 0;
  for (int i = 0; i < a.length(); i++) {
    if (a.at(i) == 'a')
      cik++;
  }
  cout << cik;
}