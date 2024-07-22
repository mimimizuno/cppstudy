#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    ll tmp = 1;
    cin >> n;
    for(int i = 1;i < 1e6;i++){
        string a = to_string((ll)pow(i,3));
        reverse(a.begin(),a.end());
        string b = to_string((ll)pow(i,3));
        if(a == b && pow(i,3) <= n){
            tmp = max(tmp,(ll)pow(i,3));
        }
    }
    cout << tmp << endl;
}