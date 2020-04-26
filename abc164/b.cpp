#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int a,b,c,d,i;

    cin >> a >> b >> c >> d;

    for( i = 1; i <= 100; i++){
        if( ( c - b ) <= 0 ){
            cout << "Yes\n";
            break;
        }
        else
        {
            c -= b;
        }
        if( ( a - d ) <= 0 ){
            cout << "No\n";
            break;
        }
        else
        {
            a -= d;
        }
        
    }

}