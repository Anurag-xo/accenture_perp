#include<bits/stdc++.h>
using namespace std;

int uniquePath(vector<vector<int>> obstacleGrid) {
  
  int n = obstacleGrid.size();
  if(n == 0) return 0;
  
  int m = obstacleGrid[0].size();
  if(m == 0) return 0;

  if(obstacleGrid[n-1][m-1]==1) return 0;

  vector<vector<int>> dp(n, vector<int> (m,0));

  for(int i = n-1; i >= 0; i --) {
    for(int j = m-1; j>=0; j--) {

      if(obstacleGrid[i][j] != 1) {

        if(i+1 < n and j+1 < m) {             // no out of bound.
          dp[i][j] = dp[i+1][j] + dp[i][j+1];
        }
        else if(i+1 < n and j+1==m) {          // column out of bound
          dp[i][j] = dp[i+1][j];
        }
        else if(j+1 < m and i+1==n) {          //row out of bound
          dp[i][j] = dp[i][j+1];
        }
        else {                               // row and column are out of bound.
          dp[i][j] = 1;
        }
      }
    }
  }
  return dp[0][0];
}
