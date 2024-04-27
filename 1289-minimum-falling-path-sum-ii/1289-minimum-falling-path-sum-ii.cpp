class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {

       vector<vector<int>>dp(grid.size(),vector<int>(grid.size()));
       for(int j=0;j<grid.size();j++){
        dp[grid.size()-1][j]=grid[grid.size()-1][j];
       }
       for(int i=grid.size()-2;i>=0;i--){
        for(int j=0;j<grid.size();j++){
        int mini = INT_MAX;
         for(int k=0;k<grid.size();k++){
            if(k==j)continue;
            mini = min(dp[i+1][k],mini);
         }
         dp[i][j] = grid[i][j]+mini;
        }
       }

        int ans = INT_MAX;
        for(int i=0;i<grid.size();i++){
            ans=min(ans,dp[0][i]);
        }
        for(auto &x:dp){
            for(auto &y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
return ans;
    }
};