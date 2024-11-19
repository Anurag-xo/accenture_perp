#include <bits/stdc++.h>
using namespace std;

int primeNum(int n) {
  if(n == 0 or n == 1) return 0;
  int sum = 0;
  
  for(int i = 2; i <= n; i++) {
    bool isprime = true;
    for(int j = 2; j <= sqrt(i); j++) {
      if(i % j == 0) {
        isprime = false;
        break;
      } 
    }
    if(isprime) sum += i;
  }
  return sum;
};

int main() {
  int result; cin >> result;
  cout << primeNum(result) << endl;
  return 0;
}
