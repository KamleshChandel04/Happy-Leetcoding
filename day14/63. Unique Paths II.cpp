#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int i , int j , vector<vector<int>> &obstacle , int n , int m , vector<vector<int>> &dp)
    {
        if(i==n-1 && j==m-1)
            return 1;
        if(i>=n || j>= m || obstacle[i][j] ==1)
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        return dp[i][j] = solve(i+1 , j , obstacle , n , m , dp) + solve(i , j+1 , obstacle , n , m , dp);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacle) {
        int n = obstacle.size();
        int m = obstacle[0].size();

        if(obstacle[0][0] == 1 || obstacle[n-1][m-1]==1)
            return 0;

        vector<vector<int>> dp(n+1 , vector<int>(m , -1));

        return solve(0 , 0 ,  obstacle , n , m , dp);
    }
};