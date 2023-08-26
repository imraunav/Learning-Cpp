#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int> > grid{{ 3, 2, 1, 3 },
                              { 1, 9, 2, 3 },
                              { 9, 1, 5, 4 }};
    vector<vector<int> > dp{{ 0, 0, 0, 0 },
                              { 0, 0, 0, 0 },
                              { 0, 0, 0, 0 }};
    int r = 3;
    int c = 4;
    dp[0][0] = grid[0][0];
    for(int i=1; i<r; i++){
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    for(int j=1; j<c; j++){
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }
    for(int i=1; i<r; i++){
        for(int j=1; j<c; j++){
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }
    }
    cout << dp[r-1][c-1];
    
}
