
/* https://vjudge.net/contest/706892#problem/C */

#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a%2 == 0 and a!=1 and a!=2){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

    return 0;
}
