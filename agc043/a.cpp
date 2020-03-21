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
    int y = 0;
    int xold = -1;
    int yold = -1;

    while( 1 ){
        cout << "now:" << x << "," << y  << "  old:" << xold << "," << yold << "\n";
        // 上確認
        if( ( x > 0 ) && ( ( x - 1 ) != xold ) && ( li[ x - 1 ][y] == 46 ) ){
            cout << "up ok\n";
            xold = x;
            x--;
        }
        // 右確認
        else if( ( y < b ) && ( ( y + 1 ) != yold ) && ( li[x][ y + 1 ] == 46 ) ){
            cout << "right ok\n";
            yold = y;
            y++;
        }
        // 下確認
        else if( ( x < a ) && ( ( x + 1 ) != xold ) && ( li[ x + 1 ][y] == 46 ) ){
            cout << "down ok\n";
            xold = x;
            x++;
        }
        // 左確認
        else if( ( y > 0 ) && ( ( y - 1 ) != yold ) && ( li[x][ y - 1 ] == 46 ) ){
            cout << "left ok\n";
            yold = y;
            y--;
        }
        // どこもいけない
        else{
            cout << "nothing\n";
            break;
        }

        // もとの位置に戻ってきたか、ゴールしたか確認
        if( ( x == 0 ) && ( y == 0 ) ){
            cout << "nothing else\n";
            break;
        }
        else if( ( x == a - 1  ) && ( y == b - 1 ) ){
            cout << "goal\n";
            break;
        }
    } 

}

/*
4 4
..##
#...
###.
###.

3 4
..##
#...
###.
*/