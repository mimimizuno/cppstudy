#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> place(N);
    vector<int> ansA(N,0),ansP(N,0);
    int change = 0;
    for(int i = 0;i < N;i++){
        cin >> A[i];
        place[A[i]-1] = i;
    }
    for(int i = 0;i<N;i++){
        if(A[i] != i + 1){
            swap(A[i],A[place[i]]);
            ansA[i] = i+1;
            ansP[i] = place[i] + 1;
            // cout << i + 1 << " " << place[i] + 1 << endl;
            swap(place[A[i]-1],place[A[place[i]]-1]);
            // for(auto x:A) cout << x << " ";
            // cout << endl;
            // for(auto x:place) cout << x << " ";
            // cout << endl;
            change++;
        }
    }
    cout << change << endl;
    for(int i = 0;i < N;i++){
        if(ansA[i] != 0){
            cout << ansA[i] << " " << ansP[i] << endl;
        }
    }
}