#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int n = (int)S.size();
    string ans;
    bool flg = true;
    for(int i = 0; i < n;i++){
        if(S[i] == '|') flg = !flg;
        if(flg && S[i] != '|') ans.push_back(S[i]);
    }
    cout << ans << endl;
}