class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        int majority = -1;
        for(auto x:nums){
            if(count==0){
                majority = x;
            }
            else if(x!=majority){
               count--; 
            }
            if(majority==x)
                count++;        
        }
        return majority;
        }
};