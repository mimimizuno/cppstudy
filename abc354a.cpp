#include<bits/stdc++.h>
using namespace std;

int main(){
    int H;
    cin >> H;
    int i = 0;
    int height =0;
    int add = 1;
    while (H >= height){
        if(i!=0) add *= 2;
        height += add;
        i++;
    }
    cout << i << endl;
}