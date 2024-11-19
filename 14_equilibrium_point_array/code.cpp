#include<bits/stdc++.h>
using namespace std;

int equilibrium(int n, vector<int> v) {
  
  int right = 0;
  int left = 0;A

  for(int i = 0; i < n; i++) {
    right += v[i];
  }

  for(int i = 0; i < n; i++) {
    right -= v[i];
    if(right == left) return i;
    left += v[i];
  }

  return -1;
}
