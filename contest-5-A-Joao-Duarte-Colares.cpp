
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
        if(entrada.quantidade_cada[i] > 3){
          cout<<"quantidade "<<i<<" "<< entrada.quantidade_cada[i]<<endl;
            return 0;
        }
        cout<<"quantidade "<<i<<" "<< entrada.quantidade_cada[i]<<endl;
    }
    return 1;

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
