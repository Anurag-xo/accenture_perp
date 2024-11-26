#include <bits/stdc++.h>
using namespace std;

// Function to calculate the number of unique paths in a grid with obstacles
int uniquePath(vector<vector<int>> obstacleGrid) {
    // Get the number of rows in the grid
    int numRows = obstacleGrid.size();
    if (numRows == 0) return 0; // If no rows, return 0

    // Get the number of columns in the grid
    int numCols = obstacleGrid[0].size();
    if (numCols == 0) return 0; // If no columns, return 0

    // If the bottom-right cell has an obstacle, no path exists
    if (obstacleGrid[numRows - 1][numCols - 1] == 1) return 0;

    // Create a DP table initialized to 0
    vector<vector<int>> dp(numRows, vector<int>(numCols, 0));

    // Start iterating from the bottom-right corner of the grid
    for (int row = numRows - 1; row >= 0; row--) {
        for (int col = numCols - 1; col >= 0; col--) {
            // Check if the current cell is not an obstacle
            if (obstacleGrid[row][col] != 1) {
                // Case 1: Both below and right cells are within bounds
                if (row + 1 < numRows && col + 1 < numCols) {
                    dp[row][col] = dp[row + 1][col] + dp[row][col + 1];
                }
                // Case 2: Only the cell below is within bounds
                else if (row + 1 < numRows && col + 1 == numCols) {
                    dp[row][col] = dp[row + 1][col];
                }
                // Case 3: Only the cell to the right is within bounds
                else if (col + 1 < numCols && row + 1 == numRows) {
                    dp[row][col] = dp[row][col + 1];
                }
                // Case 4: Both below and right cells are out of bounds (bottom-right corner)
                else {
                    dp[row][col] = 1;
                }
            }
        }
    }
    // The result is stored in the top-left cell of the DP table
    return dp[0][0];
}

