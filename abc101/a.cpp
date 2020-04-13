#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i,res = 0;
    string s;

    cin >> s;

    for( i = 0; i < 4; i++){
        if( s[i] == '+' ){
            res++;
        }
        else{
            res--;
        }
    }
    cout << res << "\n";
}