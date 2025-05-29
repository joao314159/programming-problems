
#include <iostream>
#include <vector>

using namespace std;

class Memory{
public:
    
    vector<int> keep;
    
};


Memory memory;

void troca(int& turno){
    if(turno == 0){
        turno = 1;
    }
    else{
        turno = 0;
    }
}

bool keep(vector<int> pieces, int position, tamanho){
    if(memory.keep[position] != -1){
        if(memory.keep[position] == 0){
            return false;
        }
        else{
            return true;
        }
    }
    else{
        //se ainda não salvamos na memória
        bool resultado;
        
        if(position = tamanho-1){
            resultado  = true;
        }
        else{
            
            
        }
        
        if(resultado == true){
            memory.keep[position] = 1;
        }
        else{
            memory.keep[position] = 0;
        }
        
        return resultado;
    }
}

int main()
{   
    int quantidade;
    cin>>quantidade;
    
    memory.keep = vector<int>(quantidade,-1);
    
    vector<int> pieces(quantidade);
    
    for(int i = 0; i < quantidade; i++){
        int a;
        cin>>a;
        pieces.push_back(a);
    }
    
    //Bob
    int total1 = 0;
    
    //Alice
    int total2 = 0;
    
    //0 = Alice 1 = Bob
    int turno = 1;
    
    for(int i = 0; i <quantidade;i++){
        
        //se o jogador decide ficar com a torta e passar o turno
        if(keep(pieces,i,quantidade)){
            if(turno == 0 ){
                total2 += pieces[i];
            }
            else{
                total1+=pieces[i];
            }
            troca(turno);
        }     
        else{
            if(turno == 0 ){
                total1 += pieces[i];
            }
            else{
                total2+=pieces[i];
            }
        }
        
    }

    return 0;
}


