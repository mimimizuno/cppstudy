#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A;
    cin >> N >> A;
    string op;
    int num;

    // ここにプログラムを追記
    for (int i = 0; i < N; i++)
    {
        cin >> op >> num;
        if (op == "+")
        {
            A += num;
            cout << i + 1 << ":" << A << endl;
        }
        else if (op == "-")
        {
            A -= num;
            cout << i + 1 << ":" << A << endl;
        }
        else if (op == "*")
        {
            A *= num;
            cout << i + 1 << ":" << A << endl;
        }
        else if (op == "/")
        {
            if (num == 0)
            {
                cout << "error" << endl;
                break;
            }
            A /= num;
            cout << i + 1 << ":" << A << endl;
        }
    }
}