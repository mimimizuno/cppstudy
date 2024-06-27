// #include<bits/stdc++.h>
// using namespace std;

// // TLE

// int main(){
//     int N;
//     cin >> N;
//     int Attack,Cost;
//     typedef tuple<int,int,int> tupletype;
//     vector<tupletype> card(N);
//     vector<bool> flg(N,true);
//     int i = 0;
//     for(auto &x:card){
//         cin >> Attack >> Cost;
//         get<0>(x)=Attack;
//         get<1>(x)=Cost;
//         get<2>(x)=i;
//         i++;
//     }
//     sort(card.begin(),card.end()); // Attack 昇順
//     // for(auto x:card){
//     //     cout<< "Attack = "<< get<0>(x)<< " Cost = " << get<1>(x) << " iterator = "<< get<2>(x)<<endl;
//     // }
//     for(int i = 0;i < N;i++){
//         for(int j = 1;j<N-i;j++){
//             if(get<1>(card[i]) > get<1>(card[i+j])){
//                 flg[i] = false;
//                 break;
//             }
//         }
//     }
//     for(int i = N-1;i >= 0;i--){
//         if(!flg[i]) card.erase(card.begin()+i);
//     }

//     // for(auto x:card){
//     //     cout<< "Attack = "<< get<0>(x)<< " Cost = " << get<1>(x) << " iterator = "<< get<2>(x)<<endl;
//     // }
//     for(auto &x:card){
//         get<0>(x)=get<2>(x);
//     }
//     sort(card.begin(),card.end());
//     cout<<card.size()<<endl;
//     for(auto x:card) cout<<get<0>(x) + 1<< " " ;
//     cout << endl;
// }

#include <bits/stdc++.h>

using namespace std;

struct Card {
    int a;
    int c;
    int index;
};

int main() {
    // 入力
    int n;
    cin >> n;
    vector<Card> cards(n);
    for (int i = 0; i < n; ++i) {
        int a, c;
        cin >> a >> c;
        cards[i] = {a, c, i};
    }
    
    // C[i] の昇順にソート
    sort(cards.begin(), cards.end(), [&](const auto &l, const auto &r) {
        return l.c < r.c;
    });
    
    // 答えを求める計算
    vector<int> ans;
    int v = 0;
    for (int i = 0; i < n; ++i) {
        if (cards[i].a > v) {
            v = cards[i].a;
            ans.push_back(cards[i].index);
        }
    }
    sort(ans.begin(), ans.end());
    
    // 出力
    const int m = (int)ans.size();
    cout << m << endl;
    for (int i = 0; i < m; ++i) {
        cout << ans[i] + 1;
        if (i == m - 1) {
            cout << endl;
        } else {
            cout << ' ';
        }
    }
}
