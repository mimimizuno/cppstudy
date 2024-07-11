#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    ll A,C;
    map<ll,ll> ans;
    ll tmp = 0;
    for(int i = 0;i < N;i++){
        cin >> A >> C;
        ans[C]; 
        if(ans[C] == 0) ans[C] = A;
        else{
            ans[C] = min(ans[C],A);
        }
    }
    for(auto x:ans){
        tmp = max(tmp,x.second);
    }
    cout << tmp << endl;
}