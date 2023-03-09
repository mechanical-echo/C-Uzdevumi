#include <iostream>
using namespace std;
int main() {
  string vards, uzvards;
  cin >> vards;
  cin >> uzvards;
  char a, b;
  a = toupper(vards.at(0));
  b = toupper(uzvards.at(0));
  cout << a << "." << b << ".";
}