#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ans = -1;
    vector<int> height(N);
    for(auto &x:height) cin >> x;
    for(int i = 1;i  < N; i++){
        if(height[0] < height[i]){
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}