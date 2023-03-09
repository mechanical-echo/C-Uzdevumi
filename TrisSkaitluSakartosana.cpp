#include <iostream>
using namespace std;
int main() {
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  for(int i=0; i<3; i++){
    for(int j=i+1; j<3; j++){
      if(a[i]>a[j])
        swap(a[i],a[j]);
    }
  }
  for(int i=0; i<3; i++){
    cout<<a[i]<<" ";
  }
}