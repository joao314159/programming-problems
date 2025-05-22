#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{   
    int chegada;
    int distance;
    
    cin>>chegada;
    cin>>distance;
    
    string palavra;
    
    cin>>palavra;
    
    
    vector<int> pode_pular;
    
    for(int i =0;i < palavra.length();i++){
        char e = palavra[i];
        int number = atoi(&e);
        pode_pular.push_back(number);
    }
    
    //for(int i = 0; i<pode_pular.size();i++){
    //    cout<<pode_pular[i]<<endl;
    //}
    
    int resultado = 0;
    
    
    for(int i = ( palavra.size() - 1 ) ; i >= 0; i=i){
        
        int chegada = i - distance;
        
        
        
        
        //se já pode chegar no início
        if(chegada<=0){
            resultado++;
            break;
        }
        
        bool pulou = false;
        //procuro a próxima posição para o sapo pular
        for(int i2 = chegada;i2<i;i2++){
            
            
            
            //caso contrário pula o mais longe possível
            if(pode_pular[i2] == 1){
                //atualiza a posição do sapo
                i = i2;
                //aumenta a contagem de pulos
                resultado++;
                
                pulou = true;
                
                break;
            }
        }
        if(not pulou){
            break;
        }
        
    }
    
    if(resultado==0){resultado = -1;}
    
    cout<<resultado<<endl;
    
    
    
    
    return 0;
}
