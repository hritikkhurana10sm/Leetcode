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
    
    int length(ListNode*head){
        if(head == NULL)return 0;
        return 1 + length(head->next);
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
          if(head == NULL)return NULL;
        
        k = k % length(head);
        int x = length(head) - k;
        
        int i = 0;
        
        ListNode*temp = head;
        while(i < x - 1 && temp!=NULL){
            
            temp = temp->next;
            i++;
        }
        
        if(temp == NULL){
            return head;
        }
        ListNode*t = temp->next;
        temp->next = NULL;
        
        ListNode*g = t;
        
        if(t == NULL){
            return head;
        }
        while(g->next!=NULL){
            g = g->next;
        }
        
        g->next = head;
        
        return t;
    }
};