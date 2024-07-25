#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	string S;
	int Q;
	cin >> N >> S >> Q;
	map<char,string> data;
	for(int i = 0;i < N;i++){
		data[S[i]].push_back(i);
	}

	for(int i = 0;i < Q;i ++){
		char a,b;
		cin >> a >> b;
		data[a]
	}

}

