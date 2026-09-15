class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr) {
            return head;
        }

        vector<int> ans;

        ListNode* temp = head;

        while(temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int n = ans.size();
        int p = k % n;

        reverse(ans.begin(), ans.end());
        reverse(ans.begin(), ans.begin() + p);
        reverse(ans.begin() + p, ans.end());

        ListNode* temp1 = head;

        for(int i = 0; i < n; i++) {
            temp1->val = ans[i];
            temp1 = temp1->next;
        }

        return head;
    }
};