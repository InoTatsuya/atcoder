#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int a,b;

    cin >> a >> b;

    if( a <= b ){
        cout << "unsafe\n";
    }
    else{
        cout << "safe\n";
    }
}