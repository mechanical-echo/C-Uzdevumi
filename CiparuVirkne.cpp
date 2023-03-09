#include <iostream>
using namespace std;

int main() {
  int a, b, n;
  cin>>a;
  cin>>b;
  cin>>n;
  int c[n];
  c[0] = a;
  c[1] = b;
  for(int i=2; i<n; i++){
    c[i] = c[i-2]+c[i-1];
    c[i] = c[i]%10;
  }
  cout<<c[n-1];
}