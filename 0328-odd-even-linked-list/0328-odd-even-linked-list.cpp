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
    ListNode* oddEvenList(ListNode* head) {
       vector<int>arr;
 if (head == nullptr)
            return head;
       
        ListNode *temp=head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            if(temp->next ==nullptr)
            break;
            temp=temp->next->next;

        }
        ListNode* temp1=head->next;
        while(temp1 !=nullptr){
            arr.push_back(temp1->val);
            if(temp1->next==nullptr)
            break;
            temp1=temp1->next->next;
        }
        int i=0;
        ListNode* temp2=head;
        while(temp2!=nullptr){
            temp2->val=arr[i];
            i++;
            temp2=temp2->next;
        }
        return head;
    }
};