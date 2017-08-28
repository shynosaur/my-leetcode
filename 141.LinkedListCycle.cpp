/*
141.Linked List Cycle
2017/8/27
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
  method 1
*/
class Solution {
public:
    /*
	  walker moves one step a time,and runner moves two steps a time
	  if there is a cycle,walker and runner will meet
	*/
    bool hasCycle(ListNode *head) {
        ListNode *walker = head;
        ListNode *runner = head;
        while(walker != nullptr && runner != nullptr && runner -> next != nullptr){
            walker = walker -> next;
            runner = runner -> next -> next;
            if(walker == runner)
                return true;
        }
        return false;
    }
};

/*
  method 2:use map to denote whether the node has been visited
*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        map<ListNode*, int> keys;
        while(head and keys[head] == 0){
            keys[head] = 1;
            head = head->next;
        }
        if(not head) return false;
        return true;
    }
};