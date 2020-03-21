#include<iostream>
using namespace std;

int main(){
    int a,b;
    char li[100][100];

    cin >> a >> b;

    // 入力を受けるだけ
    int i,j;
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            cin >> li[i][j];
        }
    }

    // 出力するだけ
/*
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            cout << li[i][j];
        }
        cout << "\n";
    }
*/

    // 壁伝いに動けるマスを探す
    int x = 0;
    int y = 1;
    int xold = -1;
    int yold = -1;

    for( i = 0; i < 3; i++ ){
        cout << "x:" << x << "\n";
        cout << "y:" << y << "\n";
        // 上確認
        if( ( x > 0 ) && ( x != xold ) ){
            cout << "up\n";
            if( li[ x + 1 ][y] == 46 ){
                cout << "up ok\n";
                x++;
            }
        }
        // 右確認
        else if( ( y < b ) && ( y != yold ) ){
            cout << "right\n";
            if( li[x][ y + 1 ] == 46 ){
                cout << "right ok\n";
                y++;
            }
        }
        // 左確認
        else if( ( y > 0 ) && ( y != yold ) ){
            cout << "left\n";
            if( li[x][ y - 1 ] == 46 ){
                cout << "left ok\n";
                y--;
            }
        }
        // 下確認
        else if( ( x < a ) && ( x != xold ) ){
            cout << "down\n";
            if( li[ x - 1 ][y] == 46 ){
                cout << "down ok\n";
                x--;
            }
        }
        // どこもいけない
        else{
            cout << "nothing\n";
        }

        // もとの位置に戻ってきたか、ゴールしたか確認
        if( ( x == 0 ) && ( y == 0 ) ){
            cout << "nothing else\n";
            break;
        }
        else if( ( x == a ) && ( y == b ) ){
            cout << "goal\n";
            break;
        }
    }

}