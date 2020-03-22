#include<iostream>
using namespace std;

int c_1( char *, int );
int c_2( char *, int );
int c_3( char *, int );

int main(){
    char s[100] = {0};
    int n = 0;

    cin >> s;

    int i;
    for( i = 0; s[i] != 0; i++ ){
        n++;
    }

    if( ( c_1(s,n) == 0 ) &&
        ( c_2(s,n) == 0 ) &&
        ( c_3(s,n) == 0 ) ){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }

}

int c_1( char *s, int n ){
    int i;
    for( i = 0; i < ( n / 2 ); i++ ){
        if( s[i] != s[n-i-1] )break;
    }

    return (n/2)-i;
}

int c_2( char *s, int n ){
    int i;

    n = ( n - 1)/2;

    for( i = 0; i < ( n / 2 ); i++ ){
        if( s[i] != s[n-i-1] )break;
    }

    return (n/2)-i;
}

int c_3( char *s, int n ){
    int i;
    char t[99] = {0};

    // 文字列を反転させる
    for( i = 0; i < n; i++ ){
        t[i] = s[n-i-1];
    }
//    cout << "inv:" << t << "\n";

    n = ( n - 1)/2;

    for( i = 0; i < ( n / 2 ); i++ ){
        if( t[i] != t[n-i-1] )break;
    }

    return (n/2)-i;
}