#include <iostream>
using namespace std;
int main() {
  int i;
  int a, b=0, c=0;
  int ar[10];
  for(i=0; i<10; i++){
    cin >> ar[i];
  }
  a = ar[0] + ar[9];
  for(i=0; i<10; i++){
    if(ar[i]>ar[0])
      b++;
    if(ar[i]<ar[9])
      c++;
  }
  cout<<a<<" "<<b<<" "<<c;
}