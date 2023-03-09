#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  int fakt=1;
  for(int i=1; i<=x; i++){
    fakt *= i;
  }
  cout<< fakt;
}