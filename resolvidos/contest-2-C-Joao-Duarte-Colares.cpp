#include <iostream>
#include <vector> 
#include <map>

using namespace std;

class Node{
public:

    Node(){
        this->valor = -1;
    }
    
    //o valor que essa posição chega andando para frente
    //se for -1 então essa posição ainda não foi visitada
    int valor;
    
    //o índice de onde o melhor caminho até o momento que chega nessa posição fica (não precisa)
    int partida;
    
};

class Memory{
public:

    Memory(int tamanho){
        this->positions = vector<Node>(tamanho,Node());
    }
    
    vector<Node> positions;
    
    
};


int main(){
    
    //quantidade de casos de teste    
    int testes;
    cin>>testes;
    
    for(int contador = 0; contador < testes;contador++){
        
        //aqui começa um caso de teste
        
        
       
        
        vector<int> array;
        int tamanho_array;
            
        cin>>tamanho_array;
        
        //para cada posição salvo o resultado de percorrer o array a partir de lá
        Memory memory(tamanho_array);
            
        for(int i = 0;i < tamanho_array; i++){
            int valor;
            cin>>valor;
            array.push_back(valor);
        }
        
        int maior = 0;
        
        
        for(int i = ( tamanho_array -1 );i >= 0 ; i--){
            
            int resultado = 0;
            
            //ainda não checamos esse índice
            if(memory.positions[i].valor == -1 ){
                
                resultado = array[i];
                int i2 = i + array[i];
                
                //enquanto não ultrapassarmos o array
                while(i2 < tamanho_array){
                    if(memory.positions[i2].valor != -1){
                        resultado += memory.positions[i2].valor;
                        break;
                    }
                    else{
                        resultado = resultado + array[i2];
                        i2 = i + resultado;
                    }
                }
                
                
                //no final salva na memória
                memory.positions[i].valor = resultado;
                
            }
            else{
                resultado = memory.positions[i].valor;
            }
            
            //atualiza a solução que dá a melhor resposta
            if(resultado > maior){
                maior = resultado;
            }
            
        }
        
        cout<<maior<<endl;
  
    }
    
    return 0;
}
