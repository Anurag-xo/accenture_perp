#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> arr, int divisor, int quotient, int remain, int n) {
  
  int divident = divisor * quotient + remain;

  for(int i = 0; i < n; i++) {
    if(arr[i] == divident) return i;
  }
  return -1;
}


int main() {
  int n; cin >> n;

  vector<int> v(n,0);
  int divisor;
  int quotient;
  int remain;

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cin >> divisor >> quotient >> remain;
  cout << helper(v, divisor, quotient, remain, n) << endl;
}

