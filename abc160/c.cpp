#include<iostream>
using namespace std;

int main(){
    long long int k,n;
    long long int a[200000] = {0};
    long long int i,max = 0;


    cin >> k >> n;
    cin >> a[0];
    for ( i = 1; i < n; i++)
    {
        cin >> a[i];
        if( max < ( a[i - 1] - a[i] ) ){
            max = a[i - 1] - a[i];
        }
    }
    if( max < ( k - a[n - 1] ) ){
        max = k - a[n - 1];
    }

    cout << k - max << "\n";

}