#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    int N, numa, numb;
    int a0, a1, a2, a3, a4;

    int ans = 0;
    cin >> N >> numa >> numb;

    for (int i = 1; i < N+1; i++)
    {
        int num = 0;
        a0 = i % 10;                  // 1の位
        a1 = (i % 100 - a0) / 10;     // 10の位
        a2 = (i % 1000 - a1) / 100;   // 100の位
        a3 = (i % 10000 - a2) / 1000; // 1000の位
        a4 = (i - a3) / 10000;        // 10000の位
        if (a0 > 0)
            num += a0;
        if (a1 > 0)
            num += a1;
        if (a2 > 0)
            num += a2;
        if (a3 > 0)
            num += a3;
        if (a4 > 0)
            num += a4;
        if (num >= numa && num <= numb)
            ans += i;
    }
    cout << ans << endl;
}
*/

int findsumOfDifits(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int N,A,B;
    cin >> N >> A >> B;
    int total = 0;
    for (int i = 1;i <= N;++i){
        int sum = findsumOfDifits(i);
        if(sum >= A && sum <= B){
            total += i;
        }
    }
    cout << total << endl;
}