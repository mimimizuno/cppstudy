#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    // string ans = "";
    cin >> S >> T;
    // bool flg = false;
    for (int i = 1; i < (int)S.size(); i++) // 何文字ずつ分けるか
    {
        // for (int j = 0; j < (S.size() / i); j++) //
        // {
        //     for (int k = 0; k < i; k++)
        //     {
        //         ans.push_back(S[i * j + k]);
        //     }
            
        // }
        // cout << ans << endl;
        //     if (ans == T)
        //         flg = true;
        //     ans = "";
        for(int j = 0;j < i;j++){ // 切り分けた文字数分のループ
            string now = "";
            for(int k = j;k < (int)S.size(); k += i){ // 切り分けたところからスタートして切り分けた文字数を足していくループ
                now += S[k];
            }
            if(now == T){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    // if (flg)
    //     cout << "Yes" << endl;
    // else
        cout << "No" << endl;
}