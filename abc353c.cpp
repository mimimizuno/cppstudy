// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     vector<int> tmp(100000000);
//     int ans = 0;
//     for(auto &x:A){
//         cin >> x;
//         tmp[x]++;
//     }
//     auto calc = [&](int x, int y){
//         return (A[x]+A[y]) % 100000000;
//     };
//     // for(int i = 0;i < N-1;i++){ // O(N^2)
//     //     for(int j = i+1;j< N;j++){
//     //         ans += calc(i,j);
//     //     }
//     // }

//     cout << ans << endl;
// }

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    const int M = 1e8;
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    sort(a.begin(),a.end());

    ll ans = 0;
    for(int i = 0;i < n;i++) ans += a[i]*ll(n-1);
    int r = n-1;
    for(int i = 0; i< n;i++){
        while(r >= 0 && a[i]+a[r] >= M) r--;
        ans -= ll(n-max(r,i)-1)*M;
    }
    cout << ans << endl;
}