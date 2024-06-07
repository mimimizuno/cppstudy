#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    int N;
    cin >> N;
    set <int> a;
    for(int i = 0; i <N;i++){
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    } 
    cout << a.size() << endl;
}
*/
//バケット法
/*
int main(){
    int N;
    cin >> N;
    vector <int>d(N);
    for (int i = 0; i< N;i++) cin >> d.at(i);

    vector <int>num(101,0); // バケット、d.at(i)の値域が100以下
    for(int i = 0;i< N;i++){
        num.at(d.at(i))++; // d.at(i)の場所が１増える
    }
    int res = 0;
    for (int i = 1; i<101;i++){
        if(num.at(i)){ // 0じゃない要素の数だけresを増やす
            res++;
        }
    }
    cout << res << endl;
}
*/

// std::set
int main(){
    int N;
    cin >> N;
    vector <int>d(N);
    for(int i = 0; i< N;i++) cin >> d.at(i);
    set<int> values;
    for(int i =0;i<N;i++){
        values.insert(d.at(i));
    }
    cout << values.size() << endl;
}
