#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    ll sub = 0;
    ll ans = 0;
    vector<ll> A(N),B(N);
    for(int i = 0;i < N;i++){
        cin >> A[i] >> B[i];
        // if(sub < B[i] - A[i]) sub = B[i] - A[i];
        sub = max(sub,B[i]-A[i]);
    }
    for(auto x:A) ans += x;
    cout << ans+sub << endl;
}