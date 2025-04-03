/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void read(){
    int a;
    do{
        
       cin>>a;
       if(a != 42){
           cout<<a<<"\n";
       }
       
    }
    while(a!=42);
}

int main()
{
   
    read();

    return 0;
}