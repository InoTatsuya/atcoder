#include<iostream>
using namespace std;

int main(){
    int a,b;
    char li[100][100] = {0};

    cin >> a >> b;

    int i,j;
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            cin >> li[i][j];
        }
    }

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            cout << li[i][j];
        }
        cout << "\n";
    }
    

}