class Solution {
public:
    
    
    static bool cmp(string &a, string &b){
        string ab = a+b;
        string ba = b+a;
        
        return ab>ba;
        
    }
    
    string largestNumber(vector<int>& nums) {
        
        
        vector<string> hehe;
        for(auto i:nums){
            
            hehe.push_back(to_string(i));
            
        }
        
        sort(hehe.begin(),hehe.end(),cmp);
        
        string ans="";
        for(int i=0;i<hehe.size();i++)
           ans+=hehe[i];

        if(ans[0]=='0')return "0";
        return ans;
    }
    
    
};