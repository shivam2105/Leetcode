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
    int sumOfLeftLeaves(TreeNode* root) {
       
        int ans=0;
        return dfs(ans,root,false);
        
    }
    int dfs(int ans,TreeNode* root,bool isLeft){
        if(!root)return 0;
        if(root->left==NULL && root->right==NULL && isLeft)return ans+=root->val;
        return dfs(ans,root->left,true) + dfs(ans,root->right,false);
    }
};