/*
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    //1 ->1
    //2->2
    //3->0
    //4->1
    //5->0
    //6->0
    //7->1
    //8->0
    //9->0
    //10->0
    //11->0
    //12->0
    //13->0
    //14->0
    //15->0
    
    
    //...15
    //...16
    //...17 
    //...18
    //...19    
    //...20
    //...21
    //...22 
    //...23
    //...24
    //...25
    //...26
    //...27
    //...28
    //...29
    //...30
    
    //seja x e Z, x > 15:
    
    //teorema: x = (y + z, y e Z, z e Z, y%5=0, z%3 = 0)
    
    //se x < 31, então existem y e z, portanto x pertence ao conjunto que satisfaz a condição
    //se x >=31, x <46, então:
    // x = (y e {valores que satisfazem a condição}, y <31, y >15) + 15
    //e assim por diante para x >=46, x < 61; x >=75, x<91 ...
    
    
    int quantidade;
    cin>>quantidade;
    
    vector<int> numbers(quantidade);
    
    for(int i = 0; i< quantidade; i++){
        cin>>numbers[i];
        
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7 || numbers[i] == 2){
            if(numbers[i] == 2){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }  
                             
    return 0;
}



*/



fun main() {
    
    
    val quantidade = readLine()!!.toInt()
    
    
    val numbers: MutableList<Int> = mutableListOf()
    
    //vector<int> numbers(quantidade);
    
   
    
    for(i in 0..(quantidade-1)){
        
        //cin>>numbers[i];
        val a = readLine()!!.toInt()
        numbers.add(a)
        
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7 || numbers[i] == 2){
            if(numbers[i] == 2){
                println(2)
            }
            else{
                println(1)
            }
        }
        else{
            println(0)
        }
    }
    
    
}
