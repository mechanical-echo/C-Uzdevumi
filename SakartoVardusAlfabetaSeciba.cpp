#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin >>n;
  string name[n];
  for(int i=0; i<n; i++){
    cin >>name[i];
  }
  int N = sizeof(name)/sizeof(name[0]); 
  sort(name,name+N); 
  for(int i = 0; i < N; i++){
      cout << name[i] << endl;
  }
}