class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int > q;
        int sz=deck.size();
        vector<int> ans(sz);
        for(int i=0;i<sz;i++)
        {
            q.push(i);
        }
        sort(deck.begin(),deck.end());
        int it=0;
        while(it<sz)
        {
            ans[q.front()]=deck[it];
            q.pop();
            q.push(q.front());
            q.pop();
            it++;
        }
        return ans;
    }
};