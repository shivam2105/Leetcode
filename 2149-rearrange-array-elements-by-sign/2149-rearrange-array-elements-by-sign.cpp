class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      int posptr=0;
      int negptr=1;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[negptr] = nums[i];
                negptr+=2;
            }
            else if(nums[i]>0){
            ans[posptr] = nums[i];
            posptr+=2;
            }
        }
            return ans;
        }
};