#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> s(n);
    bool flg = true;
    int ans_while = 0;
    int ans_for = 0;
    int m_while = m;
    int m_for = m;
    int rep = 0;
    for (int i = 0; i < n; i++) cin >> s[i];
    while (flg)
    {
        m_while -= s[rep];
        if (m_while >= 0) ans_while++;
        else flg = false;
        rep++;
    }
    for(int i=0;i<n;i++){
        m_for-=s[i];
        if(m_for>=0) ans_for++;
    }
    cout << ans_while << endl;
    cout << ans_for << endl;
}