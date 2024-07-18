#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll c2(ll n){
    return n*(n-1)/2;
}

int main(){
    string S;
    cin >> S;
    int n = (int)S.size();
    // int ans = 0;
    // for(int i = 0;i < n - 1;i++){
    //     string::iterator itr;
    //     itr = S.begin() + i + 1;
    //     int strcount = count(itr,S.end(),S[i]);
    //     ans += n - i - strcount - 1;
    //     // cout << "strcount = " << strcount << " ans = " << ans << endl; 
    // }
    // if(ans == 0){
    //     cout << ans + 1 << endl;
    // }
    // else{
    //     cout << ans << endl;
    // }
    
    ll same = 0;
    map<char,int> cnt;
    for(char c : S) cnt[c]++; // 文字ごとにカウント
    for(auto p : cnt){ // 同じ文字の計算
        int m = p.second;
        same += c2(m);
    }

    ll diff = c2(n) - same; // 異なる文字のカウント(全体引く同じ文字)

    ll ans = diff;
    if(same) ans++;
    
    cout << ans << endl;
}