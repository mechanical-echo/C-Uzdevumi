#include <iostream>
using namespace std;
int main() {
  char str[100];
  cin>>str;
  for(int i=0; i<100; i++){
    if(str[i]=='.')
      str[i] = ',';
  }
  cout<<str;
}