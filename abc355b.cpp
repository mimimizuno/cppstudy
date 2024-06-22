#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c;
    bool flg = false;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    copy(a.begin(), a.end(), back_inserter(c));
    copy(b.begin(), b.end(), back_inserter(c));
    sort(c.begin(), c.end());
    // for(int i = 0;i < n+m;i++){
    //     cout << c[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n; i++)
    { // nの中から2つ選んで連続するか比較
        for (int k = 0; k < n; k++)
        {
            if (k != i)
            {
                // a[i]とa[k]が連続するかどうかを見る
                for (int j = 0; j < n + m; j++)
                {
                    if (c[j] == a[i] && ((c[j - 1] == a[k]) || (c[j + 1] == a[k]))) flg = true;
                }
            }
        }
    }
    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
}
*/
int main(){
    int N,M;
    cin >> N >> M;
    vector<int> A(N),B(M);
    for(auto& x : A) cin >> x;
    for(auto& x : B) cin >> x;

    auto C = A;
    for(auto x : B) C.push_back(x);
    sort(C.begin(),C.end());

    set<int> st(A.begin(),A.end());

    for(int i = 0; i<N+M-1;i++){
        if(st.contains(C[i]) && st.contains(C[i+1])){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}