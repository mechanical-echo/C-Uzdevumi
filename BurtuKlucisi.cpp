#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  string str;
  string str2;
  cin>>str>>str2;
  bool can = true;
  int i=0;
  do{
    if(str.find(str2[i]) != std::string::npos){
      can=true;
      str.replace(str.find(str2[i]),1, ".");
      
    }
    else{
      can=false;
      break;
    }
    i++;
  }while(can && i<str2.length());
  if(can){
    cout<<"VAR" ;
  }else
    cout<<"NEVAR";
}