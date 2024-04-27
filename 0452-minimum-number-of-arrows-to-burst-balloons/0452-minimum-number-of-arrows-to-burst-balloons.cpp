class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end(),[](vector<int>a,vector<int>b){return a[1]<b[1];});
        // for(auto &x:points){
        //     for(auto &y:x){
        //         cout<<y<< " ";
        //     }
        //     cout<<endl;
        // }
        int ans = 1;
        int min = points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=min)continue;
            min=points[i][1];
            ans++;
        }
        return ans;
    }
};