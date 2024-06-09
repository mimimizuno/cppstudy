#include <bits/stdc++.h>
using namespace std;

/*解けなかった
int main(){
    string S,T="";
    string a = "dream",b="dreamer",c="erase",d="eraser";
    cin >> S;
    while(S!=T){
        T.append(a);
    }

}
*/
/*
vector<string> divide = {"dream", "dreamer", "erase", "eraser"};
int main()
{ // greedy 法
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++)
        reverse(divide.at(i).begin(), divide.at(i).end());

    bool can = true;
    for (int i = 0; i < S.size();)// iが文字数に到達するまで繰り返し
    {
        bool can2 = false; // 4個のうちどれかでdivideできるか
        for (int j = 0; j < 4; j++)
        {
            string d = divide.at(j);
            if (S.substr(i, d.size()) == d) // substrはiからd.size()分の文字数を抽出する
            {
                can2 = true;
                i += d.size();
            }
        }
        if (!can2) // 文字が合わなかったとき
        {
            can = false;
            break;
        }
    }
    if (can) cout << "YES" << endl;
    else cout<<"NO"<<endl;
}
*/
// DP法（動的計画法）
string divide[4] = {"dream", "dreamer", "erase", "eraser"};
bool dp[100010];

int main() {
    string S;
    cin >> S;

    dp[0] = 1;
    for(int i = 0; i < S.size(); ++i){
        if(!dp[i])continue; // そこまでで矛盾があったらとりあえず無視
        for(string s : divide){
            if(S.substr(i, s.size()) == s){ // うまく切れたら先に進む
                dp[i + s.size()] = 1;
            }
        }
    }
    cout << (dp[S.size()] ? "YES" : "NO") << endl;
    return 0;
}