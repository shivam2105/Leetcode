class Solution {
public:
    int ans = 0;
    
    int maxMoves(vector<vector<int>>& grid) {
        vector<vector<int>> dp(1001,vector<int>(1001));
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0;i<rows;i++){
        solve(grid,i,0,0,i,0,dp);    
        }
        
//                 for(auto x:grid){
//             for(auto y:x){
//                 cout<<y<<" ";
//             }
//             cout<<endl;
//         }
        
//         for(auto x:dp){
//             for(auto y:x){
//                 cout<<y<<" ";
//             }
//             cout<<endl;
//         }
        for(int i=0;i<rows;i++){
            
        ans = ans>dp[i][0]?ans:dp[i][0]  ; 
        }
        return ans;
        
    }
    int solve(vector<vector<int>>&grid,int rowNum,int colNum, int currentAns,int pastRow,int pastCol,vector<vector<int>> &dp){
        
        if(rowNum<0 || rowNum>= grid.size() || colNum <0 || colNum>=grid[0].size() || (grid[pastRow][pastCol]>=grid[rowNum][colNum] && colNum!=0))return currentAns-1;
        if(colNum==grid[0].size()-1)return currentAns;
        if(dp[rowNum][colNum]!=0)return dp[rowNum][colNum];
        int a = solve(grid,rowNum-1,colNum+1,currentAns+1,rowNum,colNum,dp);
        int b = solve(grid,rowNum,colNum+1,currentAns+1,rowNum,colNum,dp);
        int c = solve(grid,rowNum+1,colNum+1,currentAns+1,rowNum,colNum,dp);
        return dp[rowNum][colNum]=max(a,max(b,c));
    }
};