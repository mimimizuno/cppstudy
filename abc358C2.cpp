#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<string> s(N);
    int ans = N;
    // sに〇×を入れる
    for (int i = 0;i < N;i++) cin >> s[i];
    // bit 全探索
    for (int bit = 0;bit < (1 << N); bit++){
        vector<bool> flg(M);
        vector<string> tmp;
        bool ansflg = true;
        int count = 0;
        for(int i = 0;i < N;i++){ // 選んだやつ分の繰り返し
            if(bit & (1 << i)){
                count++;
                for(int j = 0;j < M;j++){
                    if(s[i][j] == 'o'){
                        flg[j] = true;
                    }
                }
            }
        }
        for(int j = 0;j < M;j++){
            if(!flg[j]) ansflg = false;
        }
        if(ansflg) ans = min(ans,count);
    }
    cout << ans << endl;
}