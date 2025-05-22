/* https://vjudge.net/contest/712422#problem/D */

#include <iostream>
#include <vector>

using namespace std;

class Tabuleiro{
public:

    Tabuleiro(){
        
        this->positions = {};
        
        bool white = true;
        for(int i =0;i<8;i++){
            
            vector<int> linha;
            for(int i2 = 0; i2< 8; i2++){
                if(white){
                    linha.push_back(1);
                }
                else{
                    linha.push_back(0);
                }
                
                white = not white;
            }
            this->positions.push_back(linha);
            white = not white;
            
        }
        
    }
    
    vector<vector<int>> positions;
    
    void print(){
        for(int i =0; i<8;i++){
            for(int i2 =0; i2< 8; i2++){
                cout<<"[ "<<this->positions[i][i2]<<" ]";
            }
            cout<<endl;
        }
    }
    
};

bool dentro(int x, int y){
    if(x >= 0 and x <8){
        if(y >= 0 and y<8 ){
            return true;
        }
    }
    return false;
}


int check_bishop(int x1, int y1, int x2, int y2){
    
    x1--;
    y1--;
    x2--;
    y2--;
    
    
    int resultado;
    
    bool mesma_cor = false;
    
    Tabuleiro tabuleiro;
    
    int cor1 = tabuleiro.positions[x1][y1];
    int cor2 = tabuleiro.positions[x2][y2];
    
    if(cor1 != cor2 || (x1 == x2 and y1 == y2) ){
        return 0;
    }
    else{
        
       
        
        int x01 = x1;
        int y01 = y1;
        
        
        //percorre para cima esquerda
        while(dentro(x01,y01)){
            x01--;
            y01--;
            if(x01 == x2 and y01 == y2){
            return 1;
        }
            
        }
        
        //percorre para cima direita
         x01 = x1;
         y01 = y1;
        while(dentro(x01,y01)){
            x01++;
            y01--;
            if(x01 == x2 and y01 == y2){
            return 1;
        }
        }
        
        //percorre para baixo esquerda
         x01 = x1;
         y01 = y1;
        while(dentro(x01,y01)){
            x01--;
            y01++;
            if(x01 == x2 and y01 == y2){
            return 1;
        }
        }
        
        //percorre para baixo direita
         x01 = x1;
         y01 = y1;
        while(dentro(x01,y01)){
            x01++;
            y01++;
            if(x01 == x2 and y01 == y2){
            return 1;
        }
        }
        
        
        
        return 2;
        
        
    }
    
    //checa se a cor é a mesma
    
    
    
}


int check_king(int x1,int y1,int x2,int y2){
    
    
    x1--;
    y1--;
    x2--;
    y2--;
    
    
    if(x1 == x2 and y1 == y2){
        return 0;
    }
    
    int x = abs(x1 - x2);
    int y = abs(y1 - y2);
    
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}

int check_rook(int x1,int y1,int x2,int y2){
    
    x1--;
    y1--;
    x2--;
    y2--;
    
    
    if(x1 == x2 and y1 == y2){
        return 0;
    }
    else{
        
        if(x1 == x2 || y1 == y2){
            return 1;
        }
        else{
            return 2;
        }
    
    }
}

int main()
{
    int x1;
    int y1;
    int x2;
    int y2;
    
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    
    int resultado1 = check_rook(x1,y1,x2,y2);
    int resultado2 = check_bishop(x1,y1,x2,y2);
    int resultado3  =check_king(x1,y1,x2,y2);
    
    
    cout<<resultado1<<" "<<resultado2<<" "<<resultado3<<endl;
    
    
    

    return 0;
}
