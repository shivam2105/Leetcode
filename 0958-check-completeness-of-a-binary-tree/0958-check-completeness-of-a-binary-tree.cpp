/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        
        vector<vector<int>>bfs;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()){
            queue<TreeNode*>temp;
            vector<int>v;
            while(q.size()){
                if(q.front())temp.push(q.front()->left);
                if(q.front())temp.push(q.front()->right);
                v.push_back(q.front()?q.front()->val:-1);
                q.pop();
                
            }
            bfs.push_back(v);
            q=temp;  
        }
        bool lastIndexOfPositive=false;
        for(int i=bfs.size()-1;i>=0;i--){
for(int j=bfs[i].size()-1;j>=0;j--){
    if(!lastIndexOfPositive && bfs[i][j]>-1)lastIndexOfPositive=true;
    else if(lastIndexOfPositive && bfs[i][j]==-1)return false;
        }
        }      
        return true;
        
    }
};