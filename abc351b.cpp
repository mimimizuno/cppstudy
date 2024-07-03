#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> a(N),b(N);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;

    for(int i = 0; i < N;i++){
        for(int j = 0; j < N;j++){
            // 一回出力したら終わっていい
            if(a[i][j] != b[i][j]) {
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
}