#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    ll tmp = 1;
    cin >> n;
    for(int i = 1;i < 1e6;i++){
        string a = to_string((ll)pow(i,3));
        string b = a;
        reverse(a.begin(),a.end());
        if(a == b && pow(i,3) <= n){
            tmp = max(tmp,(ll)pow(i,3));
        }
    }
    cout << tmp << endl;
}