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
private:
int getLength(ListNode* head){
    int length = 0;

    while(head != NULL){
        length++;
        head = head->next;
    }
    return length;
}
public:
    ListNode* middleNode(ListNode* head) {
        int len = getLength(head);
        int mid = (len/2);

        ListNode* temp = head;

        int count = 0;
        while(count<mid){
            temp = temp->next;
            count++;
        }
        return temp;
    }
};