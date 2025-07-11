#include <iostream>
#include <vector>

using namespace std;

//https://vjudge.net/contest/728955#problem/I

int main(){

//valor de 1 a 4  
int tea_type;

//chutes de cada participante. varia entre 1 e 4  
int chutes[5];

while(cin>>tea_type){
    
    for(int i = 0; i< 5;i++){
      cin>>chutes[i];
      
    }
    
    int resultado = 0;
    
    for(int i = 0; i<5;i++){
      if(chutes[i] == tea_type){resultado++;}
    }
    
    cout<<resultado<<endl;  
}

return 0;
}
