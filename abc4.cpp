#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int times = 0;
    bool flg = false;
    vector<int> data(N);
    for (int i = 0; i < N; i++)
    {
        cin >> data.at(i);
    }
    // while (flg == false)
    // {
    //     for (int i = 0; i < N; i++)
    //     {
    //         if (data.at(i) % 2 == 0)
    //         {
    //         }
    //         else
    //         {
    //             flg = true;
    //             break;
    //         }
    //     }
    //     if (flg == false)
    //     {
    //         times++;
    //         for (int i = 0; i < N; i++)
    //         {
    //             data.at(i) /= 2;
    //         }
    //     }
    // }
    while (true)
    {
        bool exist_odd = false;
        for (int i = 0; i < N; i++)
        {
            if (data.at(i) % 2 != 0)exist_odd = true;
        }
        if(exist_odd) break;
        for(int i = 0;i < N;i++){
            data.at(i) /= 2;
        }
        times++;
    }
    cout << times << endl;
}