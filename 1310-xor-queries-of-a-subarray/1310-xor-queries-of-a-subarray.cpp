class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int> prefix(arr.size()+1);
        vector<int> suffix(arr.size()+1);
        
        int totalXor = 0;
        for(auto x:arr){
            totalXor^=x;
        }
        
        prefix[0] = 0;
        suffix[arr.size()] = 0;
        for(int i=0;i<arr.size();i++){
        prefix[i+1] = prefix[i] ^ arr[i];    
        }
        
        for(int i = arr.size()-1;i>=0;i--){
            suffix[i] = suffix[i+1]^arr[i];
        }
        vector<int> ans;
        for(auto x: queries){
            
                ans.push_back(totalXor^prefix[x[0]]^suffix[x[1]+1]);
        }
        return ans;
        
    }
};