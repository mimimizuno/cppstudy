#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    bool can = true;
    vector<int> tin(N+1,0);
    vector<int> xin(N+1,0);
    vector<int> yin(N+1,0);
    for (int i = 1; i <= N; i++) cin >> tin.at(i) >> xin.at(i) >> yin.at(i);
    for(int i = 1;i <= N;i++){
        int dx = xin.at(i)-xin.at(i-1);
        int dy = yin.at(i)-yin.at(i-1);
        int dt = tin.at(i)-tin.at(i-1);
        if((abs(dx + dy) > dt) || (abs(dx+dy-dt)%2 == 1)){  // dx+dyとdtの奇遇は一致する必要がある→奇遇でif
            can = false;
            break;
        }
    }
    if(can) cout<< "Yes"<<endl;
    else cout<< "No" << endl;
}