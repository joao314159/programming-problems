

#include <iostream>

using namespace std;

int main()
{
    unsigned long long a1;
    unsigned long long  a2;
   
    
    while(cin>>a1 and cin>>a2){
        
        unsigned long long  auxiliar;
        if(a1 > a2){
            auxiliar = a2;
            a2 = a1;
            a1 = auxiliar;
        }
        
        unsigned long long  maior = 0;
        
        for(unsigned long long  i2 = a1; i2<=a2; i2++){
            unsigned long long  contador = 1;
            unsigned long long  i = i2;
            while(true){
                
                if(i==1){
                    break;}
                if(i%2 != 0){
                    i = 3*i +1;
                }
                else{
                    i = i/2;
                }
                contador++;
            }
            if(contador > maior){
                maior = contador;
            }
        }
        cout<<a1<<" "<<a2<<" "<<maior<<"\n";
       
    }

    return 0;
}

