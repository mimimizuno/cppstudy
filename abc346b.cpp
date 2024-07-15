#include<bits/stdc++.h>
using namespace std;

int main(){
    string const S = "wbwbwwbwbwbwwbwbwwbwbwbw";
    int w,b;
    cin >> w >> b;
    while(w >= 14 && b >= 10){
        w -= 7;
        b -= 5;
    }
    for(int i = 0;i < (int)S.size()/2 + 1;i++){
        for(int j = 1;j < (int)S.size()-i + 1;j++){
            string tmp = S.substr(i,j);
            // cout << tmp << endl;
            int countw = count(tmp.begin(),tmp.end(),'w');
            int countb = count(tmp.begin(),tmp.end(),'b');
            // cout << "w = " << countw << " b = " << countb << endl;
            if(countw == w && countb == b){
                cout << "Yes" << endl;
                return 0;
            } 
        }
    }
    cout << "No" << endl;
}