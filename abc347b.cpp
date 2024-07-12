#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    set<string> ans;
    for(int i = 0;i < (int)S.size(); i++){
        for(int j = 1;j < (int)S.size() - i + 1; j++){
            ans.insert(S.substr(i,j));
        }
    }
    cout << ans.size() << endl;
}