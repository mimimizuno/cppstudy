#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	string S;
	int Q;
	cin >> N >> S >> Q;
	string str_before = "abcdefghijklmnopqrstuvwxyz";
	string str_after = str_before;
	for(int i = 0; i < Q;i++){
		char a,b;
		cin >> a >> b;
		for(auto &x: str_after){
			if(x == a) x = b;
		}
	}
	for(int j = 0;j < (int)S.size();j++){
		for(int i = 0;i < (int)str_before.size();i++){
			if(S[j] == str_before[i]){
				S[j] = str_after[i];
			}
		}
	}
	cout << S << endl;
	// map<char,string> data;
	// for(int i = 0;i < N;i++){
	// 	data[S[i]].push_back(i);
	// }

	// for(int i = 0;i < Q;i ++){
	// 	char a,b;
	// 	cin >> a >> b;
	// 	data[a]
	// }

}

