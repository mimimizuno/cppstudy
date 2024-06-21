/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> IntegerToVector(int bit,int N){
    vector<int> s;
    for(int i = 0;i < N;i++){
        if(bit & (1 << i)){ // 整数値bitで表される選び方においてiを選ぶかどうかを判定。i桁目を残して他を消すフィルタ
            s.push_back(i);
        }
    }
    return s;
}

int main(){
    int N,W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i = 0;i < N;i++) cin >> a[i];

    // bit 全探索
    bool exist = false;
    for(int bit = 0;bit < (1 << N);bit++){ // 2^Nの全探索
        // どれを選ぶか
        vector<int> s = IntegerToVector(bit,N);

        // 部分集合に対応する総和
        int sum = 0;
        for(int i:s) sum += a[i]; // sの中からiを動かす

        // 判定
        if (sum == W) exist = true;
    }

    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i = 0;i < N;i++) cin >> a[i];

    // bit 全探索
    bool exist = false;
    for(int bit = 0; bit < (1 << N); bit++){ // bit 全探索
        int sum = 0;
        for(int i = 0;i < N;i++){ // 1の部分だけ足し算
            if(bit & (1 << i)) sum += a[i];
        }

        // 判定
        if(sum == W) exist = true;
    }

    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}