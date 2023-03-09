 #include <iostream>
using namespace std;
#include <sstream>
int main() {
  int n, m, k;
  // collumns, lines, mine count

    cin >> n; // lines

    cin >> m; // collumns

    cin >> k; // mine count

  char laukums[n][m]; // game field
  int counter = 0;
  while (counter < k) {

    int a, b;
    do {
      cin >> a;
    } while (a < 1 || a > n);
    do {
      cin >> b;
    } while (b < 1 || b > m);

    laukums[a - 1][b - 1] = '*';
    counter++;
  }
  int laukums_numbers[n][m];
  int nearest_count;
  for (int a = 0; a < n; a++) { // a b coordinates of place that isnt a mine
    for (int b = 0; b < m; b++) {
      nearest_count = 0;
      if (laukums[a][b] != '*') {
        if ((b - 1) >= 0) {
          if (a - 1 >= 0) {
            if (laukums[a - 1][b - 1] == '*') {
              nearest_count++;
            }
          }
          if (laukums[a][b - 1] == '*') {
            nearest_count++;
          }
          if (a + 1 < n) {
            if (laukums[a + 1][b - 1] == '*') {
              nearest_count++;
            }
          }
        } /////////

        if (a - 1 >= 0) {
          if (laukums[a - 1][b] == '*') {
            nearest_count++;
          }
          if ((b + 1) < m) {
            if (laukums[a - 1][b + 1] == '*') {
              nearest_count++;
            }
          }
        } /////

        if (b + 1 < m) {
          if (laukums[a][b + 1] == '*') {
            nearest_count++;
          }
        }

        if (a + 1 < n) {
          if (laukums[a + 1][b] == '*') {
            nearest_count++;
          }
        }

        if (a + 1 < n && b + 1 < m) {
          if (laukums[a + 1][b + 1] == '*') {
            nearest_count++;
          }
        }

        laukums_numbers[a][b] = nearest_count;

      } //
    }   // 
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(laukums[i][j]!='*'){
        cout<<laukums_numbers[i][j];
      }else
      cout << laukums[i][j];
      // cout<<"\t";
    }
    cout << "\n";
  }
}