#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin >> N;
    vector<int> p(N);
    for(auto &x: p) cin >> x;
    cin >> Q;
    vector<int> a(Q);
    vector<int> b(Q);
    for(int i = 0;i < Q;i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0;i < Q;i++){
        for(int x: p){
            if(a[i] == x){
                cout << a[i] << endl;
                break;
            }
            else if(b[i] == x){
                cout << b[i] << endl;
                break;
            }
        }
        
    }
}