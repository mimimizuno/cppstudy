#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    if(S[0]=='R') cout << "Yes" << endl;
    else if(S[1]=='R' && S[0] == 'S') cout << "Yes" << endl;
    else cout << "No" << endl;
}