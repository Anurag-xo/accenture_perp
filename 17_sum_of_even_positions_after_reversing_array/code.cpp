#include <bits/stdc++.h>
using namespace std;

int helper(int n, vector<int> v) {
  if( n == 0) return 0;

  int i = 0;
  int j = n - 1;

  //reversing the array
  while( i <= j) {
    swap(v[i], v[j]);
    i++;
    j--;
  }

  int sum = 0;
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) sum += v[i];
  }
  return sum;
}

