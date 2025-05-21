
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int quantidade;
    cin>>quantidade;
    
    vector<int> numbers(quantidade);
    
    for(int i = 0; i<quantidade;i++){
        cin>>numbers[i];
    }
    
    //resolve o problema
    int resultado = 1;
    int maior = 1;
    
    for(int i =1;i<quantidade; i++){
        
        
        
        if(numbers[i-1]<numbers[i]){
            resultado++;
        }
        else{
            resultado = 1;
        }
        
        if(resultado > maior){
            maior = resultado;
        }
        
    }
    
    cout<<maior<<endl;
    
    return 0;
}

