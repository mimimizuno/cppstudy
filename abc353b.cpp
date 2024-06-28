#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> group(N);
    bool flg = false;
    int ans = 0;
    int i = 0;
    for(auto &x:group) cin >> x;
    while(!flg){ // 入力と一緒に空席が足りない場合はスタートして空席をリセット、足りる場合は空席を人数分減らす
        int tmp = 0;
        while(i < N){
            if((tmp+group[i]) <= K){
                tmp += group[i];
                i++;
            }
            else break;
        }
        ans++;
        if(i == N) flg = true;
    }
    cout << ans << endl;
}