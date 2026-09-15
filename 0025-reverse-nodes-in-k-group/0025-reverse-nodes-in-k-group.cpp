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
  ListNode* findk(ListNode* temp, int k) {
        for(int i = 1; i < k && temp != nullptr; i++) {
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode *temp=head;
       ListNode *prev=NULL;
       while(temp!=nullptr){
        ListNode * kthnode=findk(temp,k);
        if(kthnode==NULL){
            if(prev) prev->next=temp;
            break;
        }
        ListNode * nextnode=kthnode->next;
        kthnode->next=NULL;
        reverse(temp);
        if(temp==head){
            head=kthnode;
        }
        else{
            prev->next=kthnode;
           
        }
        prev=temp;
        temp=nextnode;

       }
            return head;
        
    }
};