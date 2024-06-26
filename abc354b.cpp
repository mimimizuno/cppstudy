#include<bits/stdc++.h>
using namespace std;

// ソートでも辞書順に並び替えられるけど、mapなら常にソートされる
int main(){
    int N;
    cin >> N;
    map<string,int> user;
    int T = 0;
    for(int i = 0;i < N;i++){
        string s;
        int rate;
        cin >> s >> rate;
        user[s]=rate;
        T += rate;
    }
    auto num = user.begin();
    for(int i = 0;i < (T%N);i++) num++;
    cout << num->first << endl;
}