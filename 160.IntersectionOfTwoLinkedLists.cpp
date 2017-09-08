/*
160.Intersection of Two Linked Lists
2017/9/8
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
  solution 1
*/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *node1 = headA,*node2 = headB;
        while(node1 != node2){
            node1 = node1 ? node1 -> next : headB;
            node2 = node2 ? node2 -> next : headA;
        }
        return node1;
    }
};

/*
  solution 2
*/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)
			return nullptr;
		int lenA = 0;
		ListNode *tmpA = headA;
		while(tmpA){
			lenA++;
			tmpA = tmpA -> next;
		}
		int lenB = 0;
		ListNode *tmpB = headB;
		while(tmpB){
			lenB++;
			tmpB = tmpB -> next;
		}
		if(lenA > lenB){
			for(int i = 0;i < lenA - lenB;i++)
				headA = headA -> next;
		}
		else{
			for(int i = 0;i < lenB - lenA;i++)
				headB = headB -> next;
		}
		while(headA != headB){
			headA = headA -> next;
			headB = headB -> next;
		}
		return headA;
    }
};