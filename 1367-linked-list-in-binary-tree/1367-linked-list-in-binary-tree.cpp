/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    vector<string> paths;
    bool isSubPath(ListNode* head, TreeNode* root) {
     
//         brute force will be to get all paths (root to leaf) of tree and check if any path contains ll path as a sustring or not
        getAllRootToLeafPaths("",root);
        string llPath = getLinkedListPath(head,"");
        for(auto x:paths){
            if(strstr(x.c_str(),llPath.c_str()) != NULL)
                return true;
        }
        return false;
    }
    
    void getAllRootToLeafPaths(string s, TreeNode* root){
        
        if(root == NULL)return;
        if(root->left == NULL && root->right == NULL){
        s+=to_string(root->val) ;
        paths.push_back(s);   
        return;
        }
        s+=to_string(root->val) + "->";
        getAllRootToLeafPaths(s,root->left);
        getAllRootToLeafPaths(s,root->right);
    }
    
    string getLinkedListPath(ListNode *head, string s){
        while(head && head->next){
            s += to_string(head->val) + "->";
            head = head->next;
        }
        s+=to_string(head->val);
        return s;
    }
};