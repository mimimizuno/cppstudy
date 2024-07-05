#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;
    int ans = 0;
    vector<bool> teeth(N,true);
    for(int i = 0;i < Q;i++){
        int tmp;
        cin >> tmp;
        if(teeth[tmp-1] == true) teeth[tmp-1] = false;
        else teeth[tmp-1] = true;
    }
    for(auto x:teeth){
        if(x == true) ans++;
    } 
    cout << ans << endl;
}