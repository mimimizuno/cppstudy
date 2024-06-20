#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    bool can = false;
    bitset<10> ans;
    int answer = 0;

    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; n++)
    {
        string a;
        cin >> a;
        s.at(i).append(a);
    }
    for (int i = 0; i < n; n++){
        for (int j = 0;j < m;j++){
            if(s.at(i).at(j) == "〇");
        }
    }
}