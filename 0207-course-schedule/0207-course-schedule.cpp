class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>>adj(numCourses);
        for(auto x:prerequisites){
            adj[x[1]].push_back(x[0]);
        }
        vector<int>visited(numCourses);
        vector<int>rec(numCourses);
        bool ans=true;
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){ 
            if(detectCycle(adj,i,visited,rec))return false;
            }
        }
        return true;
    }
    bool detectCycle(vector<vector<int>>&adj,int parent,vector<int>&visited,vector<int>&rec){
        visited[parent]=true;
        rec[parent]=true;
        for(auto &x:adj[parent]){
            if(rec[x])return true;
            if(!visited[x] && detectCycle(adj,x,visited,rec))return true;
           
            
        }
        rec[parent]=false;
        return false;
    }
};