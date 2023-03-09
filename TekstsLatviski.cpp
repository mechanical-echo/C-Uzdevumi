#include <iostream>
#include <vector>
using namespace std;

int main() {
  string str;
  //pljavaa nekad neeed sveshas pukjiites
  int cik = 0;
  vector<string> vardi;
  
  getline(cin, str);
 
  string temp = "";
  for (int i = 0; i < str.length(); i++) {
    if (str.at(i) != ' ') {
      temp.push_back(str[i]);
      if(i==str.length()-1){
        vardi.push_back(temp);
        temp.clear();
      }
    } else if(str.at(i)==' ' && str.at(i-1)!=' '){
      vardi.push_back(temp);
      temp.clear();
    }
  }
  temp.clear();
  
  for(int j=0; j<vardi.size(); j++){
    temp = vardi.at(j);
    for(int i=0; i<temp.length()-1; i++){
      char c1, c2;
      c1 = temp.at(i);
      c2 = temp.at(i+1);
      string zimes = string(1, c1) + c2;
      string change;
      
      if (zimes == "aa" || zimes == "ee" ||zimes == "ii" || zimes == "uu"|| zimes == "gj"|| zimes == "lj"||zimes == "kj" ||zimes == "ch" || zimes == "sh"|| zimes == "zh"|| zimes == "nj") {
        change = "A";
        temp.replace(i, 2, change);
      } 
    }
    cik+=temp.length();
    
  }
  cout << cik;
}