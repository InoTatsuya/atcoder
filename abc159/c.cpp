#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double f;

    cin >> f;

    cout << std::fixed;
    cout << setprecision(12) << ( f / 3 ) * ( f / 3 ) * ( f / 3 ) << "\n";
}