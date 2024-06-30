#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    string ans = "";
    cin >> S >> T;
    bool flg = false;
    for (int i = 1; i < S.size(); i++) // 何文字ずつ分けるか
    {
        for (int j = 0; j < (S.size() / i); j++) //
        {
            for (int k = 0; k < i; k++)
            {
                ans.push_back(S[i * j + k]);
            }
            
        }
        cout << ans << endl;
            if (ans == T)
                flg = true;
            ans = "";
    }
    if (flg)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}