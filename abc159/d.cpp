#include<iostream>
using namespace std;

int ncr(int);
int factor(int);
int count(int *a, int c, int n,int ig);

#define R 2

int main(){
    int n,i,j,a[200000],c;
    int max;

    cin >> n;
    for( i = 0; i < n; i++){
        cin >> a[i];
    }
/*  表示するだけ
    for( i = 0; i < n; i++){
        cout << a[i] << "\n";
    }
*/
    // k=0~n-1でnCrを計算
    for( i = 0; i < n; i ++){
//        cout << ncr( count(a, a[i], n, i) ) << "\n";

        // ユニークかつAkでないAiの列挙
        max = 0;
        c = 0;
        for( j = 0; j < n; j++ ){
            if( ( max < a[j] ) && ( i != j ) ){
//                cout << a[j] << " ";
                max = a[j];
                c += ncr( count(a, a[j], n, i) );
            }
        }
//        cout << "\n";
        cout << c << "\n";
    }

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

int count(int *a, int c, int n,int ig){
    int i,res = 0;;

    for( i = 0; i < n; i++){
        if( i != ig ){
//            cout << a[i] << " ";
            if( a[i] == c ){
                res++;
            }
        }
    }
//    cout << "\n";

    return res;
}