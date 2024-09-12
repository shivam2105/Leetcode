class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

       set<char> s;
       for(auto x: allowed){
        s.insert(x);
       }
       bool b = true;
       int count = 0;
       for(auto x:words){
        b = true;
        for(auto y:x){
            if(!s.contains(y)){
            b = false;    
            break;
            }
        }
        if(b){
            count++;
        }
       }
       return count;
    }
};