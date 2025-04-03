/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
                if(i%i2 == 0){
                    //não é primo
                    primo = false;
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


int quantidade_primos(int menor, int maior, Dados dados){
    
    
    return 1;
}


int main()
{
    int resultado;
    
    Dados dados();
    
    resultado = quantidade_primos(1,10,dados);
    
   
    
    for(int i = 0; i < dados.primos.size();i++){
        cout<<dados.primos[i]<<endl;
    }
    
    
    return 0;
}

