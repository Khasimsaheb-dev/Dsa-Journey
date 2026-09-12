class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> arr;

        // Store all values
        for(int i = 0; i < lists.size(); i++) {
            ListNode* temp = lists[i];

            while(temp != nullptr) {
                arr.push_back(temp->val);
                temp = temp->next;   // FIX
            }
        }

        // Sort all values
        sort(arr.begin(), arr.end());

        // Create new linked list
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for(int i = 0; i < arr.size(); i++) {

            ListNode* newNode = new ListNode(arr[i]);

            if(head == nullptr) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return head;
    }
};