#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    int N, T;
    cin >> N >> T;
    int ans = -1;
    bool flg = false;
    vector<bool> ans0(N, false);
    vector<bool> ans1(N, false);
    vector<bool> ans2(N, false);
    vector<bool> ans3(N, false);
    vector<int> data(T);
    for (int i = 0; i < T; i++) // dataに値を入れるループ
    {
        cin >> data[i];
        // sort(data.begin(), data.end());
        if (!flg)
        {
            for (int j = 0; j < N; j++)
            { // 縦横の全要素
                for (int k = 0; k < N; k++)
                {                                                                      // 全要素あるかチェック
                    if (find(data.begin(), data.end(), 1 + j + k * N) != (data.end())) // タテ
                    {                                                                  // エンド以外でいいの？？
                        ans0[k] = true;
                    }
                    if (find(data.begin(), data.end(), 1 + j * N + k) != (data.end())) // ヨコ
                    {                                                                  // エンド以外でいいの？？
                        ans1[k] = true;
                    }
                    if(j == 0){
                        if (find(data.begin(), data.end(), 1 + k * (N + 1)) != (data.end())) // ナナメ
                        {                                                                    // エンド以外でいいの？？
                            ans2[k] = true;
                        }
                        if (find(data.begin(), data.end(), N + k * (N - 1)) != (data.end())) // ナナメ
                        {                                                                    // エンド以外でいいの？？
                            ans3[k] = true;
                        }
                    }
                }
                int aaa=0;
                for (auto x:ans0)
                {
                    if(x == true) aaa++;
                    if(aaa == N){
                        ans = i;
                        flg = true;
                    }
                }
                aaa = 0;
                for (auto x:ans1)
                {
                    if(x == true) aaa++;
                    if(aaa == N){
                        ans = i;
                        flg = true;
                    }
                }
                aaa = 0;
                for (auto x:ans2)
                {
                    if(x == true) aaa++;
                    if(aaa == N){
                        ans = i;
                        flg = true;
                    }
                }
                aaa = 0;
                for (auto x:ans3)
                {
                    if(x == true) aaa++;
                    if(aaa == N){
                        ans = i;
                        flg = true;
                    }
                }
                vector<int> ans0(N, false);
                vector<int> ans1(N, false);
                vector<int> ans2(N, false);
                vector<int> ans3(N, false);
            }
        }
    }
    std::cout << ans << endl;
}
*/
#define rep(i,n) for(int i = 0; i<(n);++i)

// とりあえず場合分けを考えて書いてみる

int main(){
    int n,t;
    cin >> n >> t;
    vector<int> row(n),col(n);// row ↓ colomn →
    int dia1 = 0, dia2 = 0;
    rep(ti,t){
        int a;
        cin >> a;
        a--; // 0基準に合わせる
        int i = a/n,j = a%n; // i 横　j 縦

        auto add = [&](int& x){
            x++;
            if(x == n){
                cout << ti+1 << endl;
                exit(0);
            }
        };
        add(row[i]);
        add(col[j]);
        if(i == j) add(dia1);// "\"
        if(i+j == n-1) add(dia2); // "/"
    }
    cout << -1 << endl;
    return 0;
}