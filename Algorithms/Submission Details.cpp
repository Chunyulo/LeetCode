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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lena = 0, lenb = 0, i, len;
        ListNode* ta = headA, *tb = headB;
        while(ta != NULL) {
            lena ++ ;
            ta = ta->next;
        }
        while(tb != NULL) {
            lenb ++;
            tb = tb->next;
        }
        ta = headA, tb = headB;
        if(lena > lenb){
            for(i = 0 ; i < (lena - lenb); i++)
                ta = ta->next;
            len = lenb;
        } else {
            for(i = 0 ; i < (lenb - lena); i++)
                tb = tb->next;
            len = lena;
        }
        for(i = 0 ;i < len; i++ ) {
            if(ta == tb) return ta;
            ta = ta->next;
            tb = tb-> next;
        }
        return NULL;
    }
};