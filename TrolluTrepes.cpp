#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int augstumi[n];
  for (int i = 0; i < n; i++) {
    cin >> augstumi[i];
  }
  bool eksiste = true;
  for (int i = 0; i < n; i++) {
    int j = i+1;
    if(j>=n)
      break;
    if (augstumi[i] > augstumi[j]){
      eksiste = false;
    }
    else
    if (augstumi[j] - augstumi[i] > m)
      eksiste = false;
  }
  if (eksiste)
    cout << "Yey!";
  else
    cout << "Oh, NO!";
}