#include<bits/stdc++.h>
using namespace std;

int main(){
    string S,T;
    cin >> S >> T;
    // vector<bool> flg(3,false);
    for(auto &x:T){
        x = tolower(x);
    }
    int j = 0;
    for(int i = 0;i < (int)S.size();i++){
        if(S[i] == T[j] && j < 3){
            // flg[j] = true;
            j++;
        }
        if(T[2] == 'x' && j == 2){
            cout << "Yes" << endl;
            return 0;
        }
        if(j == 3){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}