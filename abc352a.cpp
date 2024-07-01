#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,x,y,z;
    cin >> N >> x >> y >> z;
    if(x > y){
        if(z < x && z > y){
            cout << "Yes" << endl;
            return 0;
        }
    }
    if(x < y){
        if(z > x && z < y){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}