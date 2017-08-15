/*
83.Remove Duplicates from Sorted List
9ms
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
		ListNode* node = nullptr;
		ListNode* tail = head;
		while(tail){
			if(node && tail -> val == node -> val){
				node -> next = tail -> next;
				delete tail;
				tail = node -> next;
			}
			else{
				node = tail;
				tail = tail -> next;
			}
		}
		return head;
    }
};