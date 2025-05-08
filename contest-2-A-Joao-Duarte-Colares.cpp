
#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int quantidade;
    cin>>quantidade;
    
    vector<int> likes(quantidade,0);
    
    for(int i = 0; i < likes.size();i++){
        cin>>likes[i];
    }
    
    bool there_is_triangle = false;
    
    for(int i = 1; i<likes.size(); i++){
        
        //passando pelo plane i (índice i-1)
        
        //o i gosta do auxiliar
        int auxiliar = likes[i-1];
        
        //o índice do auxiliar é auxiliar-1
        
        //o auxiliar gosta do auxiliar2
        
        int auxiliar2 = likes[auxiliar-1];
        
        //o auxiliar2 gosta do auxiliar3, que deve ser igual a i
        int auxiliar3 = likes[auxiliar2-1];
        
        //conferir se o cara que o auxiliar2 gosta gosta do i
        if(auxiliar3 == i){
            there_is_triangle = true;
            break;
        }
        
    }
    
    if(there_is_triangle){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}






