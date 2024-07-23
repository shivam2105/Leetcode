class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>> vp;
        map<int,int> mp;

        for(auto x: nums){
        mp[x]++;
        }
        for(auto x:mp){
            vp.push_back(make_pair(x.second,x.first));
        }
        sort(vp.begin(),vp.end(),[](pair<int,int> a,pair<int,int> b){if(a.first<b.first) return true;
        if(a.first == b.first && a.second>b.second) return true;
        return false;
        });
        vector<int> ans;
        for(auto x:vp){
            for(int i=0;i<x.first;i++){
            ans.push_back(x.second);
            }
        }
        return ans;
    }
};