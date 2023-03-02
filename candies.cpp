#include <iostream>
using namespace std;
int main() {

  int veidi, sk, iepak=0, paliek=0;
  cin >> veidi >> sk;
  int konfektes[veidi];
  for (int i = 0; i < veidi; i++) {
    cin >> konfektes[i];
  }
  bool var = true;
  do{
    for(int i=0; i<veidi; i++){
      if(konfektes[i]<sk)
        var=false;
    }
    if(var){
      for(int i=0; i<veidi; i++){
        konfektes[i] -= sk;
      }
      iepak++;
    }
  }while(var);
  for(int i=0; i<veidi; i++){
    paliek+=konfektes[i];
  }
  cout<<iepak<<" "<<paliek;
}
