class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int c=0;
        for(auto &x:tickets){
            if(x<tickets[k])c+=x;
        }
        for(int i=0;i<tickets.size();i++){
            if(i<=k && tickets[i]>=tickets[k]){
                c+=tickets[k];
            }
            else if(i>k && tickets[i]>=tickets[k]){
                c+=tickets[k]-1;
            }
        }
     return c;   
    }
};