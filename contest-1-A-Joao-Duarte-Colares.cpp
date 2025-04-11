#include <iostream>
#include <string>
#include <bits/stdc++.h> 

using namespace std;

char anterior(char letra){

    if(letra == 'W'){return 'Q';}
    else if(letra == 'E'){return 'W';}
    else if(letra == 'R'){return 'E';}
    else if(letra == 'T'){return 'R';}
    else if(letra == 'Y'){return 'T';}
    else if(letra == 'U'){return 'Y';}
    else if(letra == 'I'){return 'U';}
    else if(letra == 'O'){return 'I';}
    else if(letra == 'P'){return 'O';}
    else if(letra == 'S'){return 'A';}
    else if(letra == 'D'){return 'S';}
    else if(letra == 'F'){return 'D';}
    else if(letra == 'G'){return 'F';}
    else if(letra == 'H'){return 'G';}
    else if(letra == 'J'){return 'H';}
    else if(letra == 'K'){return 'J';}
    else if(letra == 'L'){return 'K';}
    else if(letra == 'X'){return 'Z';}
    else if(letra == 'C'){return 'X';}
    else if(letra == 'V'){return 'C';}
    else if(letra == 'B'){return 'V';}
    else if(letra == 'N'){return 'B';}
    else if(letra == 'M'){return 'N';}
    else if(letra == '2'){return '1';}
    else if(letra == '3'){return '2';}
    else if(letra == '4'){return '3';}
    else if(letra == '5'){return '4';}
    else if(letra == '6'){return '5';}
    else if(letra == '7'){return '6';}
    else if(letra == '8'){return '7';}
    else if(letra == '9'){return '8';}
    else if(letra == '0'){return '9';}
    else if(letra == '-'){return '0';}
    else if(letra == '='){return '-';}
    
    else if(letra == '1'){return '\'';}
    else if(letra == '['){return 'P';}
    else if(letra == ']'){return '[';}
    else if(letra == '\\'){return ']';}    
    else if(letra == ';'){return 'L';}
    else if(letra == '\''){return ';';}
    else if(letra == ','){return 'M';}
    else if(letra == '.'){return ',';}
    else if(letra == '/'){return '.';}
    else if(letra == 32){return 32;}
    else if(letra == '\n'){return '\n'}
    
    else{return '0';}


}

int main(){

    string in;

    while(getline(cin,in)){

        char* string1 = new char[in.length() + 1];
        //string1[0] = 'a';
            
        strcpy(string1,in.c_str());

        string out;
    
        for(int i = 0;i<(in.length() + 1); i++){
            string1[i] = anterior(string1[i]);
        }

        for(int i = 0;i<in.length(); i++){
            cout<<string1[i];
        }

    }
    
}

/*


s[0]="`1234567890-=";
s[1]="qwertyuiop[]\\";
s[2]="asdfghjkl;'";
s[3]="zxcvbnm,./";

for (int i = 0; i < 4; ++i) {
    for (k = 1; s[i][k]!= '\0') {
        mapa[s[i][k]] = s[i][k-1];
    }  
}
mapa['\n']='\n';
mapa[' ']=' ';

*/

