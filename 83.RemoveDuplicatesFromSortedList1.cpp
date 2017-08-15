/*
83.Remove Duplicates from Sorted List
16ms
2017/8/15
*/

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
    ListNode* deleteDuplicates(ListNode* head){
        if(head == NULL)
            return NULL;
        ListNode* tail = head;
        ListNode* node = head;
        int tmp = tail -> val;
        while(tail != NULL){
            if(tail -> val != tmp){
                tmp = tail -> val;
                node = tail;
                tail = tail -> next;
            }
            else{
                tail = tail -> next;
                node -> next = tail;
            }
        }
        return head;
    }
};