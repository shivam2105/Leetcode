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
    ListNode* doubleIt(ListNode* head) {
        // brute force (reverse the list and add the current val + carry )
        head = reverse(head);
        // while(head){
        //     cout<<head->val<<" ";
        //     head = head->next;
        // }
        int carry = 0;
        ListNode* temp = head;
        ListNode* prev = head;
        while(head || carry){
            if(head){int sum=(head->val + head->val + carry);carry = (sum)/10;head->val=sum%10;prev=head;head = head->next;}
        else prev->next = new ListNode(carry),carry=0;
        
        }
        // while(temp){
        //     cout<<temp->val<<" ";
        //     temp = temp->next;
        // }
        return reverse(temp);
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(head){
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;

    }
};