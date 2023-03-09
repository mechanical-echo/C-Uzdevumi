#include <iostream>
using namespace std;
int main() {
  int a, i, x, count=0;
  cin >> a;
  for(i=0; i<a; i++){
    cin>>x;
    if(x%2==0)
      count++;
  }
  cout<<count;
}