class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {

    vector<vector<int>>ans;
    for(int i=1;i<grid.size()-1;i++){
        vector<int>temp;
        for(int j=1;j<grid.size()-1;j++){ 
            int maxi=0;
            for(int k=i-1;k<=i+1;k++){
                for(int l=j-1;l<=j+1;l++){
                maxi=max(maxi,grid[k][l]);
                }
            }
            temp.push_back(maxi);
        }
        ans.push_back(temp);
    }    
    return ans;
    }

};