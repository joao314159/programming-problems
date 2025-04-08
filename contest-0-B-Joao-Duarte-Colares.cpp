/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a1;
    int a2;
   
    
    while(cin>>a1 and cin>>a2){
        
        int maior = -10;
        
        for(int i2 = a1; i2<=a2; i2++){
            int contador = 1;
            int i = i2;
            while(true){
                
                if(i==1){
                    break;}
                if(i%2 != 0){
                    i = 3*i +1;
                }
                else{
                    i = (int) i/2;
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
