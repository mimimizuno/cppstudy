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
        data.push_back(a % W +1);
        data.push_back(a % W + 1 + W);
    }
    set <int> dataset(data.begin(),data.end());
    vector<int> ansdata(dataset.begin(),dataset.end());
    for(int i = 0;i < (int)ansdata.size()/2 ;i++){
        int tmp = ansdata[i + (int)ansdata.size()/2 - 1] - ansdata[i];
        ans = min(ans,tmp);
    }
    if(ans < A) cout << "Yes" << endl;
    else cout << "No" << endl;
}