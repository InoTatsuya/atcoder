#include<iostream>
using namespace std;

int main(){
    long long int a,b;

    cin >> a >> b;

    if( ( a == 1 ) || ( b == 1) ){
        cout << 1 << "\n";
    }
    else{
        cout << ( ( a * b ) + 1 ) / 2 << "\n";
    }
}