#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;

  for(int i = 0; i <= n; i++) {
    //Convert to binary.
    //Make 0 to 1 and 1 to 2
    //add digits of resultant binary string
    //check weather sum is off or even
   int sum = 0;
    int x = i;
    
    while(x > 0) {
      if(x & 1) {
        sum += 2;
      } else {
        sum += 1;
      }
      x = x >> 1;
    }
    if(sum % 2 != 0) count++; // Check if the number is odd.
  }
  cout << count << endl; 
};

