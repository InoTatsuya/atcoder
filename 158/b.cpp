#include <iostream>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    long int n,a,b; // a=0,b=1

    cin >> n >> a >> b;

    // 青計算 n / ( a + b )のぶん
    long int x = 0;
    x += ( n / ( a + b ) ) * a;

    // 青計算 n % ( a + b )のぶん
    if( ( n % ( a + b ) ) <= a ){
        x += n % ( a + b );
    }
    else{
        x += a;
    }

    cout << x << "\n";
}