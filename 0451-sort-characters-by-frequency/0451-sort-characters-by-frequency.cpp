class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char,int>mp;
      for(auto &x:s){
       mp[x]++;
      } 
      vector<pair<char,int>>v;
      for(auto x:mp){
        v.push_back({x.first,x.second});
      }
      string ans="";
      sort(v.begin(),v.end(),[](pair<char,int>a,pair<char,int>b){return a.second>b.second;});
      for(auto x:v){
        for(int i=0;i<x.second;i++){
            ans+=x.first;
        }
      }
      return ans;
    }
};