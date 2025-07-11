#include <iostream>
#include <vector>

using namespace std;

int main(){

//valor de 1 a 4  
int tea_type;

//chutes de cada participante. varia entre 1 e 4  
int chutes[5];

cin>>tea_type;

for(int i = 0; i< 5;i++){
  cin>>chutes[i];
  
}

cout<<tea_type<<endl;

for(int i = 0; i<5;i++){
  cout<<" "<<chutes[i]<<" ";
}
  

  

return 0;
}
