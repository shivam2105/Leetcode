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
    ListNode* rotateRight(ListNode* head, int k) {
      
        // same as rotating an array by k places 
        // reverse (n-k)%n starting nodes
        // reverse k%n end nodes
        // reverse whole ll
        
        int length = findLength(head);
        if(length==0)return NULL;
        int lastKnodes = k%length;
        int firstNodes = (((length-k)%length+length)%length);
        if(lastKnodes==0)return head;
        ListNode* fast = head;
        while(lastKnodes>0){
            fast = fast->next;
            lastKnodes--;
        }
        ListNode* slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* lastReversed = reverseAndReturnModifiedHead(slow->next);
       pair<ListNode*,ListNode*>firstReversed = reverseTillSizeK(head,firstNodes);
        firstReversed.first->next=lastReversed;
        return reverseAndReturnModifiedHead(firstReversed.second);
        
        
        
        
    }
    
    
  long long findLength(ListNode* head){
      int n = 0;
      while(head){
          head = head->next;
          n++;
      }
  return n;
  }  
  
  pair<ListNode*,ListNode*> reverseTillSizeK(ListNode*  head,int k){
      
      ListNode* prev = NULL;
      ListNode* curr = head;
      ListNode* temp = head;
      while(head && k>0){
          
          curr = head->next;
          head->next = prev;
          prev = head;
          head = curr;
          k--;
          
      }
   return {temp,prev}; 
      
  } 
    
      ListNode* reverseAndReturnModifiedHead(ListNode*  head){
      ListNode* prev = NULL;
      ListNode* curr = head;
      ListNode* temp = head;
      while(head){
          
          curr = head->next;
          head->next = prev;
          prev = head;
          head = curr;
          
      }
   return prev;
  }
    
};