#include<bits/stdc++.h>
using namespace std;

int main(){
    string S,T;
    cin >> S >> T;
    int tmp=0;
    for(int i = 0;i < (int)S.size();i++){
        for(int j = tmp;j < (int)T.size();j++){
            if(S[i] == T[j]){
                tmp = j+1;
                cout << j + 1 << " ";
                break;
            }
        }
    }
}