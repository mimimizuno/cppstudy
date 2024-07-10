#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int,int>> xy(N);
    int ans = 0;
    for(auto &a :xy) cin >> a.first >> a.second;
    for(int i = 0;i < N;i++){ // ルートにする必要ない。２乗の値で比較すればint型で比較可能
        float max = 0; // doubleだとだめ
        for(int j = 0;j < N;j++){
            if(i != j){
                float length;
                length = sqrt((xy[i].first-xy[j].first)*(xy[i].first-xy[j].first) + (xy[i].second-xy[j].second)*(xy[i].second-xy[j].second));
                if(length > max){
                    max = length;
                    ans = j;
                } 
            }
        }
        cout << ans + 1 << endl;
    }
}