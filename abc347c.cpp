#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,A,B;
    cin >> N >> A >> B;
    int W = A+B;
    vector<int> data;
    set<int> d1;
    set<int> d2;
    int ans = A+B;
    for(int i = 0; i < N;i++){
        int a;
        cin >> a;
        data.push_back(a % W);
        data.push_back(a % W + W);
    }
    // for(auto x:data) cout << x << " ";
    // cout << endl;
    set <int> dataset(data.begin(),data.end());
    // for(auto x:dataset) cout << x << " ";
    // cout << endl;
    vector<int> ansdata(dataset.begin(),dataset.end());
    // for(auto x:ansdata) cout << x << " ";
    // cout << endl;
    for(int i = 0;i < (int)ansdata.size()/2+1;i++){
        // cout << i + (int)ansdata.size()/2 -1 << endl;
        int tmp = ansdata[i + (int)ansdata.size() / 2 - 1] - ansdata[i];
        // cout<<tmp<<endl;
        ans = min(ans,tmp);
    }
    // cout << "ans = " << ans << endl;
    if(ans < A) cout << "Yes" << endl;
    else cout << "No" << endl;
}