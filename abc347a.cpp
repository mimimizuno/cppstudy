#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> ans;
    for(int i = 0; i< N;i++){
        int a;
        cin >> a;
        if(a % K == 0) ans.push_back(a / K);
    }
    for(auto x:ans) cout << x << " ";
    cout << endl;
}