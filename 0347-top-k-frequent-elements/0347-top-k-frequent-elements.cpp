class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;    
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto x:mp){
pq.push({x.second,x.first});
        }
        vector<int>ans;
        while(pq.size() && k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
       }
};