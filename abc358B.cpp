#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A;
    int time;
    bool wait = false;
    cin >> N >> A;
    vector<int> t(N);
    for (int i = 0; i < N; i++) cin >> t.at(i);
    time = t.at(0); // time variables set init
    for (int i = 0; i < N; i++)
    {
        if (!wait) time = t.at(i);
        if (i < N - 1)
        {
            if (time + A > t.at(i + 1)) wait = true;
            else wait = false;
        }
        else wait = false;
        time += A;
        cout << time << endl;
    }
    /*
    int pre = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int ans = max(pre, t) + a; // ans is adding max
        cout << ans << '\n';
        pre = ans;
    }
    */
}