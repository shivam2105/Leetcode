#include<bits/stdc++.h>
class Solution {
public:
    int maxDepth(string s) {
       stack<char>st;
        int ans =0;
        for(auto x:s){
            if(x==')'){
                ans = max(ans,(int)st.size());
                st.pop();
            }
            else if (x=='('){
                st.push(x);
            }
        }
        return ans;
    }
};