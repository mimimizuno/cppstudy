#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int avg = 0;

  vector<int> array(N);
  for(int i = 0;i < N; i++){
    cin >> array.at(i);
    avg += array.at(i);
  }
  avg /= N;
  for(int i = 0;i < N;i++){
    cout << abs(array.at(i) - avg) << endl;
  }
}