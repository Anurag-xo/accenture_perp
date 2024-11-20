#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> arr, int n) {
  int lsum = 0;
  int rsum = 0;

  vector<int> left(n,0);
  vector<int> right(n,0);

  for(int i = 1; i < n; i++) {
    lsum += arr[i - 1];
    left[i] = lsum;
  }

  for(int i = n - 2; i >= 0; i--) {
    rsum += arr[i + 1];
    right[i] = rsum;
  }

  for(int i = 0; i < n; i++) {
    if(left[i] == right[i]) {
      return i;
    }
  }

  return -1;
}

int main() {
    
}
