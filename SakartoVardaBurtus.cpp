#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  string str;
  cin >> str;
  int length = str.length();
  char charArray[length];
  for(int i=0; i<length; i++){
    charArray[i] = str.at(i);
  }
  size_t arraySize =  sizeof(charArray)/sizeof(*charArray);
  sort(charArray, charArray+arraySize);
  for(int i=0; i<length; i++){
    cout<<charArray[i];
  }
}