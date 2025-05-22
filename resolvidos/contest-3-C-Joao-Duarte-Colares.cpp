#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Memory{
public:
    
    Memory(int tamanho){
       
        vector<int> lista(tamanho,0);
        vector<int> lista2(tamanho,0);
        
        this->quantos_Q =  lista;  
        this->quantos_QU = lista2;
        
    }
    
    vector<int> quantos_Q; 
    vector<int> quantos_QU;

    
};

int main()
{
    string palavra;
    cin>>palavra;
    
    Memory memory(palavra.length());
    
    
    int quantidade_Q = 0;
    int quantidade_QA = 0;
    
    
    int resultado = 0;
    
    for(int i = 0; i < palavra.length(); i++){
        
      
        
        if(palavra[i] == 'Q'){
            
            quantidade_Q++;
            
            resultado+=quantidade_QA;
             
        }
        
        if(palavra[i] == 'A'){
            quantidade_QA+=quantidade_Q; 
        }
        /*
        memory.quantos_Q[i] = quantidade_Q;
        memory.quantos_QA[i] = quantidade_QA;
        */
    }
    
    cout<<resultado<<endl;
    
    
    return 0;
}


