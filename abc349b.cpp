#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char,int> data;
    vector<int> ans(s.size()+1,0);
    // sort(s.begin(),s.end());
    for(int i = 0;i < (int)s.size();i++){
        if(data.find(s[i]) != data.end()){
            data[s[i]]++;
        }
        else{
            data[s[i]] = 1;
        }
    }
    // for(char c:s) data[c]++; 初めて出てきたものは０で初期化される
    // cout << data[s[0]] << endl;
    for(auto x:data){
        ans[x.second]++;
        
    }
    // cout << ans[5] << endl;
    for(auto x:ans){
        // cout << x << endl;
        if(x == 0 || x == 2){
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}