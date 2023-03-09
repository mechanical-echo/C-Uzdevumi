#include <iostream>
using namespace std;
#include <stdio.h>
float ciparu_skaits(float a) {
  float cik = 0;
  while (a >= 1) {
    a = a / 10;
    cik++;
  }
  return cik;
}
long stoint(const char *s)
{
    long i;
    i = 0;
    while(*s >= '0' && *s <= '9')
    {
        i = i * 10 + (*s - '0');
        s++;
    }
    return i;
}
int solve(int a) {
  int sum = 0;
  do {
    sum += a % 10;
    a = a / 10;
  } while (a > 0);
  return sum;
}
int main() {
  int sum = 0;
  string str;
  cin >> str;
  int size = str.length();
  int k;
  if (size > 8) { // 20
    k = size / 8;
    if (size % 8 > 0) {
      k++;
    }
    int m[k];
    int n = 0;
    for (int i = 0; i < k; i++) {
      if (k - i == 1 && size % 8 > 0)
        m[i] = stoint(str.substr(n, size % 8).c_str());
      else
        m[i] = stoint(str.substr(n, 8).c_str());
      n += 8;
      sum += solve(m[i]);
    }

  } else {
    sum += solve(stoint(str.c_str()));
  }
  cout << sum;
}