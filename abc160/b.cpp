#include<iostream>
using namespace std;

int main(){
    int a,res ;

    cin >> a;

    res = ( a / 500 ) * 1000;
    a -= 500 * ( a / 500 );
    res += ( a / 5 ) * 5;

    cout << res << "\n";

}