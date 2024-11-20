#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> arr, int n) {

  int count = 0;

  for(int i = 0; i < n; i++) {
    if(arr[i] > 0) {
      count++;
    }
  }
  int mid_element = (count + 1)/2;

  for(int i = 0; i < n; i++) {
    if(arr[i] > 0) {
      mid_element--;
      if(mid_element == 0) return arr[i];
    }
  }
  return -1;
}


int main() {
  int n;
  cin >> n;

  vector<int> v(n,0);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cout << helper(v, n) << endl;
  return 0;
}
