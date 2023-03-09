#include <iostream>
using namespace std;
int main() {
  string s;
  string str2;
  cin>>s>>str2;
  bool can = true;
  int i=0;
  do{
    if(s.find(str2[i]) != std::string::npos){
      can=true;
    }
    else{
      can=false;
      break;
    }
    i++;
  }while(can && i<str2.length());
  if(can){
    cout<<"Var" ;
  }else
    cout<<"Nevar";
}