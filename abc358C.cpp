/*
#include <bits/stdc++.h>
using namespace std;

std::vector<int> find_all(const std::string str, const std::string subStr)
{
    std::vector<int> result;

    int subStrSize = subStr.size();
    int pos = str.find(subStr);

    while (pos != std::string::npos)
    {
        result.push_back(pos);
        pos = str.find(subStr, pos + subStrSize);
    }

    return result;
}

int main()
{
    int n, m;
    bool can = false;
    bitset<10> ans;
    int answer = 0;

    cin >> n >> m;
    vector<string> s(n);
    vector<string> find;
    for (int i = 0; i < n; n++)
    {
        string a;
        cin >> a;
        s[i].append(a);
    }
    for (int i = 0; i < n; n++)
    {
        for (int j = 0; j < m; j++)
        {
            find = find_all(a," ");
        }
    }
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    int ans = n;
    // 選択肢の中からいくつか選んで最適なものを探す→bit全探索
    for (int bit = 0; bit < (1 << n); bit++) {// bit全探索
        vector<bool> exist(m);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                ++cnt;
                for (int j = 0; j < m; j++) {
                    if (s[i][j] == 'o') exist[j] = true;
                }
            }
        }
        bool all_exist = true;
        for (int j = 0; j < m; j++) {
            if (!exist[j]) all_exist = false;
        }
        if (all_exist) ans = min(ans, cnt);
    }
    cout << ans << endl;
}