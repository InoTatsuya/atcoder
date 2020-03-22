#include<iostream>
using namespace std;

int ncr(int);
int factor(int);

int main(){
    int a;

    cin >> a;

    cout << ncr(a) << "\n";

//    cout << li[ a - 1 ] << "\n";
}

int ncr(int n){
    return ;
}

int factor(int n){
    int i,res = 1;
    for( i = 1; i <= n; i++ ){
        res *= i;
    }

    return res;
}