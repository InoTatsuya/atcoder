#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i,res = 0;
    char s[3] = {-1};

    for( i = 0; i < 3; i++){
        cin >> s[i];
    }

    for( i = 0; i < 3; i++){
        if( s[i] == 0x31 ){
            res++;
        }
    }

    cout << res << "\n";
}