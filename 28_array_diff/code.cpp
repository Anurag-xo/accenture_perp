#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;

  int arr[n] = {0};

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int num;
  cin >> num;
  int diff;
  cin >> diff;


  int count = 0;
  for(int i = 0; i < n; i++) {
    if(abs(arr[i] - num) <= diff) {
      count++;
    }
  }
  if(count > 0) {
    cout << count << endl; 
  } else {
    cout << -1 << endl;
  }
  return 0;
}
