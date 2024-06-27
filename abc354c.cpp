#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int Attack,Cost;
    typedef tuple<int,int,int> tupletype;
    vector<tupletype> card(N);
    vector<bool> flg(N,true);
    int i = 0;
    for(auto &x:card){
        cin >> Attack >> Cost;
        get<0>(x)=Attack;
        get<1>(x)=Cost;
        get<2>(x)=i;
        i++;
    }
    sort(card.begin(),card.end());
    // for(auto x:card){
    //     cout<< "Attack = "<< get<0>(x)<< " Cost = " << get<1>(x) << " iterator = "<< get<2>(x)<<endl;
    // }
    for(int i = 0;i < N;i++){
        
    }
}