class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<long long int,long long int>mp;
        mp.insert({(long long int)nums[0]*nums[0]*1ll,1});
        for(auto x:nums){
            cout<<x<<" ";
        }
        for(int i=1;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end())
            mp.insert({(long long int)nums[i]*nums[i]*1ll,mp[nums[i]]+1});
            else mp.insert({(long long int)nums[i]*nums[i]*1ll,1});
        }
        int maxi = INT_MIN;
        for(auto x:mp){
            maxi = x.second>maxi?x.second:maxi;
        }
         return maxi>1?maxi:-1;
    }
};