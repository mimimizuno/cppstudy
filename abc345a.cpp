#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    bool flag = false;
    if (S[0] == '<' && S[(int)S.size() - 1] == '>')
    {
        flag = true;
    }
    if (flag)
    {
        for (int i = 1; i < (int)S.size() - 1; i++)
        {
            if(S[i] != '='){
                cout << "No" << endl;
                return 0;
            } 
        }
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
}