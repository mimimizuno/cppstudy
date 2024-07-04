#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int main()
// {
//     ll N;
//     cin >> N;
//     vector<ll> data;
//     for (ll i = 0; i < N; i++)
//     {
//         ll a;
//         cin >> a;
//         data.push_back(a);
//         // cout<< "push_back data : "<< data[i] << endl;
//         // for(auto x:data) cout << x << " ";
//         // cout << endl;
//         if (data.size() > 1)
//         {
//             // cout <<"data.size() > 1 : " << i << endl;
//             while (data[data.size()-1] == data[data.size()-2]){
//                 // cout << "data[data.size() - 1] != data[data.size() - 2] : " << i << endl;
//                 ll tmp = data[data.size()-1] + 1;
//                 data.pop_back();
//                 data.pop_back();
//                 data.push_back(tmp);
//             }
//         }
//     }
//     cout << data.size() << endl;
// }

int main() {
	int n,l=0;
	int a[200000]; // 条件を満たすサイズの配列を用意
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[l]; // lを動かして用意した配列のl番目の要素に代入していく
		l++;
		while(l>1){
			if(a[l-2]==a[l-1]){
				a[l-2]++; // a[l-2]に1を足せばよい
				l--; // lを1戻せば１つ消したことになる、新しくlを代入できる
			}
			else break;
		}
	}
	cout<<l<<endl;
	return 0;
}