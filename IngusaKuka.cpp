#include <iostream>
using namespace std;
int main() {
  int n;
  cin >>n;
  string x ="$";
  for(int i=0; i<2; i++){
    for(int i=0; i<n; i++){
      cout<<x;
      if(n-i==1)
        cout<<"\n";
      else
        cout<<" ";
    }
    x = "|";
  }
  n += n-1;
  for(int i=1; i<=3; i++){
    for(int j=0; j<n; j++){
      if(i%2==0)
        cout<<"~";
      else
        cout<<"-";
    }
    cout<<"\n";
  }
}