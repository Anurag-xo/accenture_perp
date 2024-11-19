#include<bits/stdc++.h>
using namespace std;

int total_jumps(int n, int m) {
  return ((n/m) + n % m);
}

int main() {
  int n;
  int m;

  cin >> m >> n;
  cout << total_jumps(n,m) << endl;

}
