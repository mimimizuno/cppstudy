#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int tmp=0;
    for(int i = 0;i < N - 1;i++){
        int a;
        cin >> a; 
        tmp += a;
    }
    cout << -1*tmp << endl;

}