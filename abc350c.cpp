#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    int ans = 0;
    // int a,tmp,jj;
    for(auto &x:A) cin >> x;
    // for(int i = 0;i < N;i++){
    //     for(int j = i;j < N;j++){
    //         int tmp = N+1;
    //         if(A[j] < tmp){
    //             tmp = A[j];
    //             jj = j;
    //         }
    //     }
    //     a = A[i];
    //     A[i] = tmp;
    //     A[jj] = a;
    //     cout << i << " " << jj << endl;
    // }
    while(true){
        int i = 0;
        int ans = 0;
        while(i < N){
            if(A[i] > A[i+1]){
                cout << i+1 << " " << i+2 << endl;
                swap(A[i],A[i+1]);
            }
            if(A[i] == i+1){
                ans++;
            }
            if(ans == N){
                return 0;
            }
            i++;
        }

    }
}