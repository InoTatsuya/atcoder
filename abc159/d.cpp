#include<iostream>
using namespace std;

int ncr(int);
int factor(int);

#define R 2

int main(){
    int n,i,a[200000];

    cin >> n;
    for( i = 0; i < n; i++){
        cin >> a[i];
    }
/*  表示するだけ
    for( i = 0; i < n; i++){
        cout << a[i] << "\n";
    }
*/

    for( i = 0; i < n; i++)

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