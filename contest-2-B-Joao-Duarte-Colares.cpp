#include <iostream>
#include <vector> 

using namespace std;

int main(){
    
    int quantidade;
    
    cin>>quantidade;
    
    vector<int> empregados(quantidade,-2);
    
    for(int i = 0; i< quantidade; i++){
        cin>>empregados[i];
        
    }
   
    int maior = 0;
    int auxiliar = 0;
    //para cada empregado, percorrer superiores até chegar em -1
    for(int i = 1; i< quantidade; i++){
        
        auxiliar = 1;
        //percorrer
        int i2 = empregados[i-1];
        while(i2 != -1 ){
            auxiliar++;
            //o superior do empregado i é o empregado empregados[i2-1]
         
            i2 = empregados[i2-1];
        }
        if(maior < auxiliar){
            maior = auxiliar;
        }
    }
    
    cout<<maior<<endl;
    
    return 0;
}
