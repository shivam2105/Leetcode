class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        // basically transpose and then reverse row wise
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(j<=i){
                swap(nums[i][j],nums[j][i]);
                }
            }
        }
        for(auto &x:nums){
            reverse(x.begin(),x.end());
        }
    }
};