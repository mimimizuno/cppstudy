#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    bool flg = false;
    vector<vector<int>> ans(N,vector<int>(N));
    for(int i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            cin >> ans[i][j]; 
        }
    }
    for(int i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            if(ans[i][j] == 1){
                cout << j + 1 << " ";
                flg = true;
            }
        }
        if(flg) cout << endl;
    }
}