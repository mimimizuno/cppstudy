#include <bits/stdc++.h>
using namespace std;

/*
int main()
{
    int N;
    int Anum = 0, Bnum = 0;
    int tmp;
    cin >> N;
    priority_queue<int> cards;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        cards.push(tmp);
    }
    while (!cards.empty())
    {
        Anum += cards.top();
        cards.pop();
        if (!cards.empty())
        {
            Bnum += cards.top();
            cards.pop();
        }
    }
    cout << Anum - Bnum << endl;
}
*/

int main()
{
    int N;
    int Alice = 0;
    int Bob = 0;
    cin >> N;
    vector<int> a(N);

    for (int i = 0; i < N; i++)
    {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            Alice += a.at(i);
        }
        else
        {
            Bob += a.at(i);
        }
    }

    cout << Alice - Bob << endl;
}