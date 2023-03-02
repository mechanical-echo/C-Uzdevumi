#include <iostream>
using namespace std;
int main() {
  //unsigned long long = 64bit int 
  unsigned long long n, m, dalitajs=1, i;
  cin >> n >> m;
  if(n>m)
    swap(n,m);
  for(i=n; i>0; i--){
    if(n%i==0 && m%i==0){
      dalitajs=i;
      break;
    }
  }
  cout<<dalitajs;
}
