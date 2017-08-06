/*
9.PalindromeNumer
head and tail
without extra number
2017/8/6
*/

class Solution {
public:
    bool isPalindrome(int x) {
		if(x < 0) return 0;
		int len = 1;
		int head,tail;
        while(x / len >= 10){
			len *= 10;
		}
		while(x > 0){
			head = x / len;
			tail = x % 10;
			if(head != tail){
				return false;
			}
			x = (x % len) / 10;
			len /= 100; 
		}
		return true;
    }
};