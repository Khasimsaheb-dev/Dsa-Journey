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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
          ListNode *temp=list1;
          ListNode*temp1=list2;
          vector<int>arr;
          while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
          }
          while(temp1!=nullptr){
            arr.push_back(temp1->val);
            temp1=temp1->next;
          }
          sort(arr.begin(),arr.end());
        ListNode* dummy = new ListNode(0);
        ListNode* temp3 = dummy;

        for(int i = 0; i < arr.size(); i++) {
            temp3->next = new ListNode(arr[i]);
            temp3 = temp3->next;
        }

        return dummy->next;
    }
};