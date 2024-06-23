#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, T;
    cin >> N >> T;
    int ans = 0;
    bool flg = false;
    vector<bool> ans0(N, false);
    vector<bool> ans1(N, false);
    vector<bool> ans2(N, false);
    vector<bool> ans3(N, false);
    vector<int> data(N);
    for (int i = 0; i < N; i++) // dataに値を入れるループ
    {
        cin >> data[i];
        // sort(data.begin(), data.end());
        if (!flg)
        {
            for (int j = 0; j < N; j++)
            { // 縦横の全要素
                for (int k = 0; k < N; k++)
                {                                                                      // 全要素あるかチェック
                    if (find(data.begin(), data.end(), 1 + j + i * N) != (data.end())) // タテ
                    {                                                                  // エンド以外でいいの？？
                        ans0[k] = true;
                    }
                    if (find(data.begin(), data.end(), 1 + j * N + i) != (data.end())) // ヨコ
                    {                                                                  // エンド以外でいいの？？
                        ans1[k] = true;
                    }
                    if (find(data.begin(), data.end(), 1 + i * (N + 1)) != (data.end())) // ナナメ
                    {                                                                    // エンド以外でいいの？？
                        ans2[k] = true;
                    }
                    if (find(data.begin(), data.end(), N + i * (N - 1)) != (data.end())) // ナナメ
                    {                                                                    // エンド以外でいいの？？
                        ans3[k] = true;
                    }
                }
                for (auto x : ans0)
                {
                    if (x == false)
                    {
                        vector<int> ans0(N, false);
                        break;
                    }
                    ans = i;
                    flg = true;
                }
                for (auto x : ans1)
                {
                    if (x == false)
                    {
                        vector<int> ans1(N, false);
                        break;
                    }
                    ans = i;
                    flg = true;
                }
                for (auto x : ans2)
                {
                    if (x == false)
                    {
                        vector<int> ans2(N, false);
                        break;
                    }
                    ans = i;
                    flg = true;
                }
                for (auto x : ans3)
                {
                    if (x == false)
                    {
                        vector<int> ans3(N, false);
                        break;
                    }
                    ans = i;
                    flg = true;
                }
            }
        }
    }
    if(flg) cout<<ans<<endl;
    else cout<<-1<<endl;
}