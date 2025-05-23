
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    //caso 1: é múltiplio de 15
    
    //retorna x/15
    
    //caso 2: não é múltiplo de 15
    
    //existe solução em que há ( (x - (x%15))/15 ) moedas de 15:
    //y = ( (x - (x%15))/15 ) 
    //x = y+1 ou y +3 ou y+6 ou y + 10
    
    //retorna y + 1
    
    // e se y = 2 ou 4 ou 5 ou 7 ou 8 ou 9 ou 11 ou 12 ou 13 ou 14 ? 
    
    //y = 2:
    //retorna y + 2 eu acho
    
    //y = 4:
    //retorna y + 2 

    //y = 5
    //retorna y + 1
    
    //y = 7
    //retorna y + 2
    
    //y = 8
    //retorna y + 2

    //y = 9
    //retorna y + 2
    
    //y = 11
    //retorna y + 2
    
    //y = 12
    //retorna y + 2
    
    //y  = 13
    //retorna y + 2
    
    //y = 14
    //retorna y + 3
    
    
    int a;
    
    cin>>a;
    
    for(int contador = 0; contador < a; contador++ ){
        
        int resultado;
        
        int entrada;
        cin>>entrada; 
        
        int resto = entrada%15;
        int x = entrada/15;
        
        
        
        if(x == 0){
            if(resto == 1){
                resultado = 1;
            }
            if(resto == 2){
                resultado = 2;
            }
            if(resto == 3){
                resultado = 1;
            }
            if(resto == 4){
                resultado = 2;
            }
            if(resto == 5){
                resultado = 3;
            }
            if(resto == 6){
                resultado = 1;
            }
            if(resto == 7){
                resultado = 2;
            }
            if(resto == 8){
                resultado = 3;
            }
            if(resto == 9){
                resultado = 2;
            }
            if(resto == 10){
                resultado = 1;
            }
            if(resto == 11){
                resultado = 2;
            }
            if(resto == 12){
                resultado = 2;
            }
            if(resto == 13){
                resultado = 2;
            }
            if(resto == 14){
                resultado = 3;
            }
        }
        else{
            
            if(resto == 0){resultado = x;}
            
            else{
                
                if(resto == 1 || resto == 3 | resto == 5 | resto == 6 || resto == 10 || resto == 14){
                    if(resto == 14){
                        resultado = x + 3;
                    }
                    else{
                        resultado = x + 1;
                    }
                }
                else{
                    resultado = x + 2;
                }
            
            }
            
        }
        
        cout<<resultado<<endl;
        
        
        
        
    }
    
            
    
    
    
    
    
    return 0;
}



