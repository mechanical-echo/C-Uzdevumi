#include <iostream>
using namespace std;
int main() {
  int a,b,c;
  cin >>a>>b>>c;
  int d, f ,e; //platums, garums, skaits
  cin>>d>>e>>f;

  int wall1 = c*a; //
  int wall2 = c*b; //
  int walls = 2*(wall1 + wall2); 

  int paper = d*f*e;
  cout<<walls-paper;
  if(walls>paper)
    cout<<"\nnepietiek";
  else
    cout<<"\npietiek";
  
}