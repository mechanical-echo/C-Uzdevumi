#include <iostream>
using namespace std;
int main() {
  string str;
  cin >> str;
  int size = str.length();
  int c = (size%2==0) ? (size/2) : ((size+1)/2);
  string field[3][c];
  int counter = 0;

  for (int j = 0; j < c; j++) {
    for (int i = 0; i < 3; i++) {
      if (counter < str.length()) {
        if (j % 2 == 0) {
          field[i][j] = str.at(counter);
          counter++;
        } else if (j % 2 != 0 && (i == 0 || i == 2)) {
          field[i][j] = '-';
        } else if (j % 2 != 0 && i == 1) {
          field[i][j] = str.at(counter);
          counter++;
        }
      } else {
        field[i][j] = '-';
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < c; j++) {
      if (field[i][j] != "-") {
        cout << field[i][j];
      }
    }
  }