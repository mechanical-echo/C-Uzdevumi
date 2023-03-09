#include <iostream>
using namespace std;
int main() {
  int n;
  cin >>n;
  int ar[n];
  int sum=0, count=0, avrg;
  for(int i=0; i<n; i++){
    cin>>ar[i];
    sum += ar[i];
  }
  avrg = sum/n;
  for(int i=0; i<n; i++){
    if(avrg<ar[i])
      count++;
  }
  cout<<count;
}