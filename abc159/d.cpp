#include<iostream>
using namespace std;

int ncr(int);
int factor(int);

#define R 2

int main(){
    int a;

    cin >> a;

    cout << ncr(a) << "\n";

//    cout << li[ a - 1 ] << "\n";
}

int ncr(int n){
    return factor(n)/(R * factor(n-R));
}

int factor(int n){
    int i,res = 1;
    for( i = 1; i <= n; i++ ){
        res *= i;
    }

    return res;
}