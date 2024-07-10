class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>s;
        for(auto &x:logs){
            if(s.size()&&x == "../"){
                s.pop();
            }
            else if(x != "./" && x != "../"){
                s.push(x);
            }
        }
        return s.size();
    }
};