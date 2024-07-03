#include <bits/stdc++.h>
using namespace std;

int main()
{
    int const time = 9;
    int asum = 0;
    int bsum = 0;
    vector<int> A(time), B(time-1);
    for (auto &x : A)
    {
        cin >> x;
        asum += x;
    }
    for (auto &x : B)
    {
        cin >> x;
        bsum += x;
    }
    // 問題文の制約条件より常にasum >= bsum
    // if(asum - bsum >= 0){
        cout << asum-bsum+1 << endl;
    // }
    // else cout << 0 << endl;
}