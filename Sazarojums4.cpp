#include <iostream>
using namespace std;
int main() {
  int n;
  do {
    cin >> n;
  } while (n < 0 || n > 100000);
  cout << ((n % 2 == 0) ? "ir" : "nav");
}