#include<iostream>
#include<cstring>
using namespace std;

int check(long long int *a, int n);
void div(long long int *a, int n);

int main(){
    int i,n,res = 0;
    long long int a[200] = {0};

    cin >> n;
    for( i = 0; i < n; i++){
        cin >> a[i];
    }

    while( 1 ){
        if( check( a, n) ){
            break;
        }
        else{
            div( a, n );
            res++;
        }
    }

    cout << res << "\n";
}

int check(long long int *a, int n){
    int i,res = 0;

    for( i = 0; i < n; i++){
        if( a[i] % 2 == 1 ){
            res++;
            break;
        }
    }

    return res;
}

void div(long long int *a, int n){
    int i;
    for( i = 0; i < n; i++ ){
        a[i] /= 2;
    }
}
