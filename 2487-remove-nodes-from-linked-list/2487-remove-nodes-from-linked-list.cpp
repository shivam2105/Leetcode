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
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
      
        //brute force (create a stack and then later point the nodes)
        stack<ListNode*>s;
        s.push(head);
        while(head){
            while(s.size() && head->val>s.top()->val){
                s.pop();
            }
            s.push(head);
            head=head->next;
        }
        ListNode* temp = new ListNode();
        ListNode* temp2 = temp;
        vector<ListNode*>v;
        while(s.size())v.push_back(s.top()),s.pop();
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]->val<<" ";
            temp->next = v[i];
            if(i==v.size()-1)temp->next->next=NULL;
            else
            temp = v[i];
            
        }
        return temp2->next;
    }
};