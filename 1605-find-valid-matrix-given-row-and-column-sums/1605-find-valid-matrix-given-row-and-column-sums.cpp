class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
        vector<vector<int>> ans(rowSum.size(),vector<int>(colSum.size()));
        
        for(int i=0;i<rowSum.size();i++){
            for(int j=0;j<colSum.size();j++){
                int mini = min(rowSum[i],colSum[j]);
                ans[i][j] = mini;
                rowSum[i]-= mini;
                colSum[j]-= mini;
                
            }
        }
        return ans;
    }
};