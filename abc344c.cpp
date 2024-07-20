#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N,M,L,Q;
    cin >> N;
    vector<int> A(N);
    for(auto &x:A) cin >> x;
    cin >> M;
    vector<int> B(M);
    for(auto &x:B) cin >> x;
    cin >> L;
    vector<int> C(L);
    for(auto &x:C) cin >> x;
    cin >> Q;
    vector<int> X(Q);
    unordered_set<int> ans;
    vector<bool> flg(Q,false);
    for(auto &x:X) cin >> x;
        for(int i = 0;i < N;i++){
            for(int j = 0;j < M;j++){
                for(int k = 0;k < L;k++){
                    int tmp = A[i] + B[j] + C[k];
                    ans.insert(tmp);
                }
            }
        }
    for(auto x: X){
        if(ans.count(x)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}