#include <iostream>
#include <vector> 
#include <map>

using namespace std;

class node{
public:

    node(){
        this->valor = -1;
    }
    
    //o valor que essa posição chega andando para frente
    //se for -1 então essa posição ainda não foi visitada
    int valor;
    
    //o índice de onde o melhor caminho até o momento que chega nessa posição fica
    int partida;
    
};




int main(){
    
    //quantidade de casos de teste    
    int testes;
    cin>>testes;
    
    for(int contador = 0; contador < testes;contador++){
    
    
    
    
    //aqui começa um caso de teste
    
    
    /*
        map<int,int> ultrapassagens;
        
        vector<int> array;
        
        int tamanho_array;
        
        cin>>tamanho_array;
        
        for(int i = 0;i < tamanho_array; i++){
            cin>>valor;
            array.push_back(valor);
        }
        
        for(int i = 0; i <tamanho_array;i++){
            
            //se o valor do índice leva para fora do array
            if((array[i] + (i+1)) > tamanho_array){
                ultrapassagens[i] = (array[i] + (i+1)) - tamanho_array;
            }
            
        }
        
        //para cada valor no map, percorremos para trás
        for(int i = 0; i < ultrapassagens.size(); i++){
            
            //enquanto não chegarmos no     
        }
    
    */
    
    vector<int> array;
    int tamanho_array;
        
    cin>>tamanho_array;
        
    for(int i = 0;i < tamanho_array; i++){
        int valor;
        cin>>valor;
        array.push_back(valor);
    }
    
    //salvo o valor de cada índice 
    vector<node> memory(tamanho_array,node());
    
    for(int i = 0;i < tamanho_array; i++){
        
        
        
        
    }
    
   
    }
   
    
    return 0;
}
