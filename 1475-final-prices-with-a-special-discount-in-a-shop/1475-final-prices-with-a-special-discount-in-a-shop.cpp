class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // basically next smaller or equal element
        stack<int>s;
        vector<int>nse(prices.size());
        for(int i=0;i<prices.size();i++){
            if(s.empty() || prices[i]>prices[s.top()]){
                s.push(i);
            }
            else if(prices[i]<=prices[s.top()]){
                while(!s.empty() && prices[i]<=prices[s.top()]){
                    nse[s.top()] = prices[i];
                    s.pop();
                }
                s.push(i);
            }
            
        }
        for(int i=0;i<prices.size();i++){
            nse[i]=prices[i]-nse[i];
        }
        return nse;
    }
};