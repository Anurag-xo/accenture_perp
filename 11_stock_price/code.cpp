#include <bits/stdc++.h>
using namespace std;

int negativeGrowth(int n, vector<int> v) {

  if(n == 0 or n == 1) return 0;

  int count = 0;

  for(int i = 1; i < n; i++) {
    if(v[i] < v[i-1]) count ++;
  }
  return count;
}
