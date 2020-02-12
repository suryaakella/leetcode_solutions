class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m == 0 || n == 0) return 0;
        if(m == 1 || n == 1) return 1;
        vector<vector <int>> dp(m+1,vector <int> (n+1,0));  
        for(int j = 1; j<n; j++){dp[m][j] = 1;}
        for(int i = 1; i<m; i++){dp[i][n] = 1;}
        for(int i = m-1; i>0; i--){
            for(int j = n-1; j>0;j--){
             dp[i][j] = dp[i][j+1] + dp[i+1][j];    
            }
        }
        return dp[1][2] + dp[2][1];
    }
};
