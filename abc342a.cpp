#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int size = (int)S.size();
    for(int i = 0;i < size;i++){
        int a = count(S.begin(),S.end(),S[i]);
        if(a == 1){
            cout << i+1 << endl;
            return 0;
        }
    }
}