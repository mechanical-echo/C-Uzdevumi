#include <iostream>
using namespace std;
int main() {
  char str[5];
  for(int i=0; i<5; i++){
    string b;
    cin>>b;
    str[i] = b.at(0);
  }
  cout<<str;
}