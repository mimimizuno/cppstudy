#include <bits/stdc++.h>
using namespace std;

// 1秒間で処理できるfor文ループの回数は10^8回程度
/*
int main()
{
    int N, Y;
    int x, y, z;
    int ansx=0,ansy=0,ansz=0;
    int tmp=0;
    cin >> N >> Y;
    for (x = 0; x < N+1; x++)
    {
        for (y = 0; y < N+1; y++)
        {
            for (z = 0; z < N+1; z++)
            {
                if ((x + y + z) <= N)
                {
                    tmp = 10000 * x + 5000 * y + 1000 * z;
                    if (Y == tmp){
                        ansx = x;
                        ansy = y;
                        ansz = z;
                        break;
                    }
                }
                else break;
            }
            if (Y == tmp)break;
        }
        if (Y == tmp)break;
    }
    if(Y == tmp) cout << ansx << " " << ansy << " " << ansz << " " << endl;
    else cout<< -1 << " " << -1 << " " << -1 << endl;
}
*/
int main()
{
    int N, Y;
    cin >> N >> Y;
    int res10000 = -1, res5000 = -1, res1000 = -1; // 例外パターンで初期化
    for (int a = 0; a <= N; a++)
    {
        for (int b = 0; b+a <= N; b++) //5000円の枚数を0～N-aで調べる
        {
            int c = N - a - b; // 自動的にcの値は決まるから3重ループにする必要がない
            int total = 10000 * a + 5000 * b + 1000 * c;
            if (total == Y)
            {
                res10000 = a;
                res5000 = b;
                res1000 = c;
            }
        }
    }
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}
