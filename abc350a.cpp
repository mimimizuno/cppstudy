#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    if(str == "ABC000" || str == "ABC316" || str > "ABC349"){
        std::cout << "No" << endl;
        return 0;
    }
    std::cout << "Yes" << endl;
}