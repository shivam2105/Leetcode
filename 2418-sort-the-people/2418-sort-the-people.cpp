class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<pair<int,string>> p;
        for(int i=0;i<heights.size();i++){
            p.push_back(make_pair(heights[i],names[i]));
        }
        sort(p.begin(),p.end(), greater<pair<int,string>>());
        vector<string>ans;
        for(auto x:p){
            ans.push_back(x.second);
        }
        return ans;
    }
};