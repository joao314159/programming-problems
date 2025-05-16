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
        
        int y01 = 8 - (y1 + 1);
        int x01 = 8 - (x1 + 1);
        int y02 = 8 - (y2 + 1);
        int x02 = 8 - (x2 + 1);
        
        if( ( (double)(y1+1)/(double)(x1+1) - (double)(y2+1)/(double)(x2+1)) < 0.00001){
            return 1;
        }
        if( ( (double)(y01+1)/(double)(x01+1) - (double)(y02+1)/(double)(x02+1)) < 0.00001){
            return 1;
        }
        else{
            return 2;
        }
        
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
