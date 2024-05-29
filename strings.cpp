#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int ans = 1;

    // ここにプログラムを追記
    for (int i = 1; i < S.size(); i++)
    {
        if (S.at(i) == '1')
        {
            if (S.at(i - 1) == '+')
            {
                ans++;
            }
            if (S.at(i - 1) == '-')
            {
                ans--;
            }
        }
    }
    // 符号の数だけカウントすればよい

    cout << ans << endl;
}