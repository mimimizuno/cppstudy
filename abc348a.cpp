#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string ans;
    for(int i = 1;i < N+1;i++){
        if(i % 3 == 0){
            ans.push_back('x');
        }
        else ans.push_back('o');
    }
    cout<<ans<<endl;
}