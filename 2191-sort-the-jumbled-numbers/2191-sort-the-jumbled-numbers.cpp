class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
     
        vector<string> v;
        for(auto x:nums){
            v.push_back(to_string(x));
        }
        vector<pair<int,string>> vp;
        for(auto x:v){
            string s = "";
            for(auto y:x){
                s+=(mapping[y-48]+48);
            }
            vp.push_back({stoi(s),x});
        }
//         for(auto x: vp){
//             cout<<x.first<<" "<<x.second<<endl;
            
//         }
        sort(vp.begin(),vp.end(),[](pair<int,string>p1, pair<int,string>p2){
            if(p1.first<p2.first)return true;
            return false;
        });
        vector<int> ans;
        for(auto x: vp){
            ans.push_back(stoi(x.second));
        }
        return ans;
    }
};