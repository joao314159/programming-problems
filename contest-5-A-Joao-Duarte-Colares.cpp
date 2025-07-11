
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Number{
public:

    int valor;
    string valor_string;
    vector<int> quantidade_cada;

};


bool consulta(vector<bool> mais_que_o_limite, int number){
    
    if(mais_que_o_limite[number]){
        return true;
    }
    else{
        return false;
    }
    
}

char int_to_char(int a){
    if(a==0){return '0';}
    else if(a==1){return '1';}
    else if(a==2){return '2';}
    else if(a==3){return '3';}
    else if(a==4){return '4';}
    else if(a==5){return '5';}
    else if(a==6){return '6';}
    else if(a==7){return '7';}
    else if(a==8){return '8';}
    else if(a==9){return '9';}
}

int resultado(Number entrada){

    /*

    vector<int> quantidade_cada_ate_o_momento(10,0);

    for(int i = 0;i< entrada.valor_string.length();i++){

        //adiciono 1 no contador do algarismo que está na posição
        int auxiliar = entrada.valor_string[i] - '0';
        quantidade_cada_ate_o_momento[auxiliar]++;
    }

    int vezes_repetido_mais_repetido = 0;
    //salvo quantas vezes o caractere que mais repete repete
    for(int i = 0; i<10;i++){
        if(quantidade_cada_ate_o_momento[i] > vezes_repetido_mais_repetido){
            vezes_repetido_mais_repetido = quantidade_cada_ate_o_momento[i];
        }
    }

    //agora que sei quantas vezes cada algarismo ocorre, rodo o seguinte até haver no máximo 2 de cada
    while(vezes_repetido_mais_repetido > 2){
        int mais_repetido_auxiliar = 0;


        vector<int> quantidade_ate_o_momento_auxiliar(10,0);
        for(int i = 0;i<entrada.valor_string.length();i++){
            //salvo sempre quantas vezes o número que mais repete repete, para parar quando não passar de 2
            if(i <10){
                if(quantidade_cada_ate_o_momento[i] > mais_repetido_auxiliar){
                    mais_repetido_auxiliar = quantidade_cada_ate_o_momento;
                }
            }

            //modifico os valores dos algarismos, sempre priorizando os algarismos de números menores

            quantidade_ate_o_momento_auxiliar[i]


        }



        vezes_repetido_mais_repetido = mais_repetido_auxiliar;
    }
    */

    for(int i = 0;i < 10;i++){
        if(entrada.quantidade_cada[i] > 2){
          cout<<"quantidade "<<i<<" "<< entrada.quantidade_cada[i]<<endl;
          cout<<"resultado tem mais que 2 números repetindo "<<endl<<endl;
        }
    }

    vector<bool> mais_que_o_limite(10,false);

    for(int i = 0; i< 10; i++){
      if(entrada.quantidade_cada[i] > 2 ){
        mais_que_o_limite[i] = true;
        
      }
    }
    
    for(int i = 0; i<10;i++){
        if(consulta(mais_que_o_limite,i)){
            cout<<"o algarismo "<<i<<" é maior que o máximo"<<endl;
        }
    }
    
    
    //percorrendo a partir do início, se um algarismo é igual a um número que é TRUE em mais_que_limite[o número], então esse
    //número necessariamente deve mudar, se for o terceiro encontrado. (manter lista de encontrados de cada valor de 0 a 9)
    
    int encontrados[10] = {0,0,0,0,0,0,0,0,0,0};
    


    
    //quando mudamos um valor diferente de zero,modificamos quantidade_cada[valor] para quantidade_cada[valor]-1 
    //e modificamos mais_que_limite[valor] caso quantidade_cada[valor] fique menor que 3
    for(int i =0; i < entrada.valor_string.length();i++){
        
        
        int auxiliar = entrada.valor_string[i] - '0';
        
        //caso o algarismo não seja 0
        if(auxiliar != 0){    
            if(entrada.quantidade_cada[auxiliar] > 2){
                cout<<"o valor na posição "<< i <<"é maior que o limite!"<<endl;
                encontrados[auxiliar]++;
                
                //se for o terceiro então é ele que devemos subtrair 1
                if(encontrados[auxiliar] == 3){
                    
                    
                    char a = int_to_char(auxiliar-1);
                    entrada.valor_string[i] = a;
                    
                    //atualizo os dados do valor subtraído
                    encontrados[auxiliar]--;
                    entrada.quantidade_cada[auxiliar]--;
                    
                    //atualizo os dados da posição após subtração
                    entrada.quantidade_cada[auxiliar-1]++;
                    
                    //repete enquanto precisar
                    if(entrada.valor_string[i] > 0){i--;}
                    
                }
            }
        }
        
    }
    
    cout<<"depois de mudar: "<<endl;
    
    cout<<entrada.valor_string<<endl;
    

    
    
    


}

int main()
{

    vector<Number> entradas;

    string auxiliar;

    while(getline(cin, auxiliar)){


        //int auxiliar2 = stoi(auxiliar);

        Number number;
        //number.valor = auxiliar2;
        number.valor_string = auxiliar;

        vector<int> quantidade_cada(10,0);

        //conto quantas vezes aparece cada número na representação do número
        for(int i = 0; i<auxiliar.length(); i++){

            cout<<"caractere i: "<<auxiliar[i]<<endl;

            int auxiliar_number = auxiliar[i] - '0';
            quantidade_cada[auxiliar_number]++;

            cout<<auxiliar_number<<endl;
            cout<<quantidade_cada[auxiliar_number]<<endl<<endl;

        }

        number.quantidade_cada = quantidade_cada;

        entradas.push_back(number);

        cout<<entradas.back().valor_string<<endl;

        int resultado1  = resultado(entradas.back());

        cout<<resultado1<<endl;

        cout<<endl;

    }


    return 0;
}
