 #include <iostream>
using namespace std;
int main() {
  int n, m, c;
  do{
    cin>>n;
  }while(n<1);
  do{
    cin>>m;
  }while(m>10);
  do{
    cin>>c; //c<=n*m+1
  }while((c<1 || c>105) && c>n*m+1 );
    
  int field[n][m+1];
  int counter = 1;
  for(int i=0; i<n; i++){
    for(int j=0; j<m+1; j++){
      if(i%2==0 && j==m){
        field[i][j]=0;
      }else{
        field[i][j] = counter; 
        counter++;
      }
    }
  }

  int neighbours[6];
  counter=0;

  for(int i=0; i<n; i++){
    for(int j=0; j<m+1; j++){
      if(field[i][j]==c){
        //Ja atradijam c

        if(j==0 && i%2>0){//ja c atrodas kresiajaa malaa
          if(i>0){

            neighbours[counter] = field[i-1][j];
            counter++;
          }

          neighbours[counter] = field[i][j+1];
          counter++;
          if(i+1<n){

            neighbours[counter] = field[i+1][j];
            counter++;
          }
        }else if(i%2>0){
            
          if(i>0){

            neighbours[counter] = field[i-1][j-1];
            counter++;
            neighbours[counter] = field[i-1][j];

            counter++;
          }
            
          if(j!=0){

            neighbours[counter] = field[i][j-1];
            counter++;
            if(i+1<n){
  
              neighbours[counter] = field[i+1][j-1];
              counter++;
              }
          }
          if(i+1<n){
 
            neighbours[counter] = field[i+1][j];
            counter++;
          }
          if(j+1<m+1){
           
            neighbours[counter] =  field[i][j+1];
            counter++;
          }
        } else if(i%2==0 ){
         // cout<<field[i][j]<<"\n";
          if(i-1>=0){
            neighbours[counter] = field[i-1][j];
            counter++;
            if(j+1<m+1){
              neighbours[counter] = field[i-1][j+1];
              counter++;
            }
          }
          if(j-1>=0){
            neighbours[counter] = field[i][j-1];
            counter++;
          }
          if(j+1<m+1){
            neighbours[counter] = field[i][j+1];
            counter++;
          }
          if(i+1<n){
            neighbours[counter] = field[i+1][j];
            counter++;
            if(j+1<m+1){
              neighbours[counter] = field[i+1][j+1];
              counter++;
            }
            }
          
        }
      }
      
    }
  }
//  cout<<counter<<"\n";
  if(counter<6){
    for(int i=counter; i<6; i++){
      neighbours[i] = 0;
    }
  }
  for(int i=0; i<6; i++){
    for(int j=i+1; j<6; j++){
      if(neighbours[i]>neighbours[j]){
        int temp = neighbours[i];
        neighbours[i] = neighbours[j];
        neighbours[j] = temp;
      }
    }
  }
  for(int i=0; i<6; i++){
    if(neighbours[i]!=0)
      cout<<neighbours[i]<<" ";
  }
}