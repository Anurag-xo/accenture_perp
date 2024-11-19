#include <bits/stdc++.h>
using namespace std;

int houses(int n, vector<int> v) {
  
  if(n == 0) return 0;

  int count = 0;

  for(int i = 0; i < n; i++) {
    if(v[i] != 0 and v[i] % 3 = 0) count++;
  }
  return count;
};

