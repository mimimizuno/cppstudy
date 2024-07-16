#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N,K;
    cin >> N >> K;
    int tmp;
    ll sum = 0;
    ll ans = 0;
    set<int> a;
    for(int i = 0; i < N;i++){
        cin >> tmp;
        if(tmp <= K) a.insert(tmp);
    }
    for(auto x: a) sum += x;
    // cout << sum << endl;
    ans = (ll)K*(K+1)/2;
    //for(int i = 1;i < K+1;i++) ans += i;
    // cout << ans << endl;
    cout << ans - sum << endl;
}