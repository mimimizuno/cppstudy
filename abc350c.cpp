#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<bool> flg(N,false);
    int a,tmp,jj;
    for(auto &x:A) cin >> x;
    for(int i = 0;i < N;i++){
        for(int j = i;j < N;j++){
            int tmp = N+1;
            if(A[j] < tmp){
                tmp = A[j];
                jj = j;
            }
        }
        a = A[i];
        A[i] = tmp;
        A[jj] = a;
        cout << i << " " << jj << endl;
    }
}