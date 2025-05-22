/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* https://vjudge.net/contest/706892#problem/D */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
class Dados{
    public:
    
    Dados(){
        int maior = sqrt(1000000000) + 1;
        this->maior=maior;
        
        this->primos = {};
        
        //calcula primos;
        this->primos.push_back(2);
        for(int i = 3;i <= maior; i++){
            
            //tento dividir pelos primos já calculados
            bool primo = true;
            for(int i2 = 0;i2 < this->primos.size(); i2++){
                if(i%primos[i2] == 0){
                    //não é primo
                    primo = false;
                    break;
                }
            }
            if(primo){
                this->primos.push_back(i);
            }
        }
    }
    
    bool preenchido;
    vector<int> primos;
    int maior;
    
};


void quantidade_primos( const Dados& dados){
    
    int menor;
    int maior;
    cin>>menor;
    cin>>maior;
    
    int tamanho = maior-menor +1;
    bool* primos = new bool[tamanho]; 
    for(int i2 = 0;i2<tamanho;i2++){
        primos[i2] = false;    
    }
    
    for(int i = menor; i < (maior + 1); i++){
        
        int x = i;
        int raiz = sqrt(x) + 1;
        
        bool primo = true;
        
        //testar para x se ele é divisível por cada um dos primos salvos em resultado 
        //até chegar na raiz de x
        
        //forma menos otimizada
        /*
        for(int i2 = 2; i2 < raiz;i2++){
            
            if(x%i2 == 0){
                //não é primo
                primo = false;
                
            }
        }
        */
        
        int i2 = 2;
        int i3 = 0;
        
        while(i2 <= raiz){
            
            if(x%i2 == 0){
                //não é primo
                primo = false;
            }
            
            i3++;
            if(i3 == dados.primos.size()){break;}
            i2 = dados.primos[i3];    
        }
        
        
        if(x == 2){primo = true;}
        
        if(primo){
            primos[x - menor] = true;
        }
        
    }    
    
    for(int i =0;i <tamanho;i++){
        if(primos[i] and (i + menor) != 1){
            cout<<i + menor<<"\n";
        }
    }
    cout<<"\n";
}


int main()
{
 
    Dados dados;
    
    // for(int i = 0; i < dados.primos.size();i++){
    //     cout<<dados.primos[i]<<endl;
    // }
    int quantidade;
    cin>>quantidade;
    
    for(int i =0;i < quantidade; i++){
        quantidade_primos(dados);
    }
    
    return 0;
}
