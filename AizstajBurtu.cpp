#include <iostream>
using namespace std;
int main() {
  string str;
  char ch;
  char replacement;
  cin >> str;
  cin >> ch;
  cin >> replacement;
  string r(1, replacement);
  for(int i=0; i<str.length(); i++){
    if(str.at(i)==ch)
      str.replace(i, 1, r);
  }
  cout<<str;
}