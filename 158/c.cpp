#include<iostream>
using namespace std;

#define X 0.08
#define Y 0.1

int main(){
    int x,y;  // x = 8%, y = 10%
    cin >> x >> y;
    int result = 0;

    // 8%時の税抜価格範囲を求める
    int i;
    int xmin = x / X;
    int xmax = ( ( x + 1 ) / X ) - 1;
    cout << "xmin:" << xmin << ",xmax" << xmax << "\n";

    // 10%時の税抜価格範囲を求める
    int ymin = y / Y;
    int ymax = ( ( y + 1 ) / Y ) - 1;
    cout << "ymin:" << ymin << ",ymax" << ymax << "\n";

    // 全探索
    if( xmin <= ymin ){
        cout << "xmin:" << xmin << "\n";
        for( i = xmin; i <= xmax; i++){
            if( (i * Y) == xmin ){
                cout << "i:" << i << "\n";
                result = i;
            }
        }
    }
    else if( ymin <= xmin ){
        cout << "ymin:" << ymin << "\n";
        for ( i = ymin; i <= ymax; i++)
        {
            cout << "i:" << i << "\n";
            if( ( i * X ) == ymin ){
                result = i;
            }
        }
        
    }

    if( result == 0 ){
        cout << -1 << "\n";
    }
    else{
        cout << result << "\n";
    }


}