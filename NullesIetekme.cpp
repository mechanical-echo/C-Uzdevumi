#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  bool change = false;
  for(int i=0; i<n; i++){
    cin >> a[i];
    if(a[i]==0)
      change=true;
  }
  if(change){
    for(int i=0; i<n; i++){
      a[i] = -a[i];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(a[i]>a[j])
        swap(a[i], a[j]);
    }
  }
  for(int i=0; i<n; i++){
    cout<<a[i]<<endl;
  }
}