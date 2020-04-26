#include<iostream>
#include<cstring>
#include <string>
using namespace std;

int main(){
    int n,i,j,k,res = 0;
    string s;

    cin >> n;
    cin >> s;

    for( i = 0; i < n; i++ ){
        if( s[i] == 'R' ){
            j = i + 1;
            for( j = 0; j < n; j++ ){
                if( s[j] == 'G' ){
                    k = j + 1;
                    for( k = 0; k < n; k++ ){
                        if( s[k] == 'B' ){
                            if( ( j - i ) != ( k - j ) ){
                                cout << i << "," << j << "," << k << "\n";
                                res++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << res << "\n";
}
