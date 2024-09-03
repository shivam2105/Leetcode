class Solution {
public:
    int getLucky(string s, int k) {
       string initial = "";
       for(auto &x : s){
        initial+=to_string(x-96);
       }
       return rec(initial,k);
    }
    int rec(string s, int k){
        if(k==0)return stoi(s);
        int sum = 0;
        for(auto &x : s){
        sum+=x-48;
        } 
        return rec(to_string(sum),k-1);
    }
};