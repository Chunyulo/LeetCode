/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curNode = node;
        while(curNode->next->next != NULL) {
            curNode->val = curNode->next->val;
            curNode = curNode->next;
        }
        curNode->val = curNode->next->val;
        curNode->next = NULL;
    }
};