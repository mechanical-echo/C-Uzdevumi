#include <iostream>
using namespace std;
int main() {
  int a;
  cin >>a;
  string ar[a];
  char str[a];
  for(int i=0; i<a; i++){
    cin >> ar[i];
   }
  for(int i=0; i<a; i++){
    cout<<ar[i].at(0);
  }
}