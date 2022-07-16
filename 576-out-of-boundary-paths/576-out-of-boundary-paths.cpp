class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
    this->m = m;
    this->n = n;

    dp.resize(maxMove + 1, vector<vector<int>>(m, vector<int>(n, -1)));
    return findPaths(maxMove, startRow, startColumn);
  }

 private:
  constexpr static int kMod = 1e9 + 7;
  int m;
  int n;
  vector<vector<vector<int>>> dp;

  int findPaths(int k, int i, int j) {
    if (i < 0 || i == m || j < 0 || j == n)
      return 1;
    if (k == 0)
      return 0;
    if (dp[k][i][j] != -1)
      return dp[k][i][j];
    return dp[k][i][j] =
      ((findPaths(k - 1, i + 1, j) + findPaths(k - 1, i - 1, j)) % kMod +
       (findPaths(k - 1, i, j + 1) + findPaths(k - 1, i, j - 1)) % kMod) %
        kMod;
  }
};
// Time: O(mnN)
// Space: O(mnN)
// Bottom-up
// class Solution {
//  public:
//   int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
//     constexpr int kMod = 1e9 + 7;
//     const vector<int> dirs{0, 1, 0, -1, 0};
//     int ans = 0;

//     vector<vector<int>> dp(m, vector<int>(n));
//     dp[startRow][startColumn] = 1;

//     while (maxMove--) {
//       vector<vector<int>> newDp(m, vector<int>(n));
//       for (int r = 0; r < m; ++r)
//         for (int c = 0; c < n; ++c)
//           if (dp[r][c] > 0)
//             for (int k = 0; k < 4; ++k) {
//               const int x = r + dirs[k];
//               const int y = c + dirs[k + 1];
//               if (x < 0 || x == m || y < 0 || y == n)
//                 ans = (ans + dp[r][c]) % kMod;
//               else
//                 newDp[x][y] = (newDp[x][y] + dp[r][c]) % kMod;
//             }
//       dp = move(newDp);
//     }

//     return ans;
//   }
// };