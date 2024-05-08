class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<pair<int,int>>vpii;
        int index=0;
        for(auto x:score){
            vpii.push_back({x,index});
            index++;
        }
        sort(vpii.begin(),vpii.end(),greater<pair<int,int>>());
        vector<string>v(score.size());
        int rank = 0;
        for(auto x:vpii){
            cout<<x.first<<" "<<x.second;
            cout<<endl;
        }
        vector<string>ranks = {"Gold Medal","Silver Medal","Bronze Medal"};
        for(auto x:vpii){
            if(rank<3)v[x.second]=ranks[rank];
            else v[x.second]=to_string(rank+1);
            rank++;
        }

    
        return v;

    }
};