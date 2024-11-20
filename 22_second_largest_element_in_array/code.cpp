#include <bits/stdc++.h>
using namespace std;

int helper(int n, vector<int> v) {

  if( n == 0 ) return 0;

  int secondLastElement = 0;

  for(int i = n - 2; i >= 0; i--) {
    if(v[i] < v[i+1]) {
      secondLastElement = v[i];
      break;
    }
  }

  int occurence = 0;

  for(int i = 0; i < n; i++) {
    if(v[i] == secondLastElement) {
      occurence++;
    }
  }
  return occurence;
}
