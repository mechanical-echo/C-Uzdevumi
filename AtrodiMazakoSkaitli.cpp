#include <iostream>
using namespace std;
int main() {
  int a;
  cin >> a;
  int ar[a];
  for(int i=0; i<a; i++){
    cin >> ar[i];
  }
  for(int i=0; i<a; i++){
    for(int j=i+1; j<a; j++){
      if(ar[i]>ar[j]){
        int t = ar[i];
        ar[i] = ar[j];
        ar[j] = t;
      }
    }
  }
  cout<<ar[0];
}