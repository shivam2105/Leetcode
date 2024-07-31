class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      // brute force 
      // create two arrays (positives and negatives)
      // sc = O(n)
      // tc = O(n)
        vector<int>positives,negatives;
        for(auto &x:nums){
            if(x>0)
            positives.push_back(x);
            else 
            negatives.push_back(x);
        }
        for(int i=0;i<positives.size();i++){
            nums[2*i]=positives[i];
            nums[2*i+1]=negatives[i];
        }
        return nums;
    }
};