#include <bits/stdc++.h>
using namespace std;

int IsTransformation(string s1, string s2) {
  unordered_map<char, int> mp;
  int count = 0;

  for(int i = 0; i < s2.length(); i++) {
    mp[s2[i]]++;
  }

  for(int i = 0; i < s1.length(); i++) {
    if(mp.count(s1[i]) and mp[s1[i]]>0) {
      mp[s1[i]]--;
    }
  }

  for(auto m:mp) {
    count += m.second;
  }
  return count;
}
