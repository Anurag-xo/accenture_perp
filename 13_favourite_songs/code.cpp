#include <bits/stdc++.h>
using namespace std;

int songs(string s; int k) {
  
  int i = 0;
  int j = 0;
  int currentcount = 0;
  int maxcount = 0;

  while(j < k) {
    if(s[j] == 'a') {
      currentcount++;
    }
    j++;
  }
  maxcount = max(maxcount, currentcount);

  while(j < s.length()) {
    if(s[i] == 'a') currentcount--;
    if(s[j] == 'a') currentcount++;
    maxcount = max(maxcount, currentcount);
    i++;
    j++;
  }
  return maxcount;
};

