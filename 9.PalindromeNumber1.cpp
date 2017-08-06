/*
9.PalindromeNumer
turn integer into string
use extra space
2017/8/6
*/

class Solution {
public:
    bool isPalindrome(int x) {
		if(x < 0) return 0;
		if(x == 0) return 1;
	    int before[10],after[10];
		int cnt = 0;
		while(x > 0){
			after[cnt++] = x % 10;
			x /= 10;
		}
		for(int i = 0;i < cnt;i++){
			before[i] = after[cnt - 1 - i];
		}
		for(int i = 0;i < cnt;i++){
			if(before[i] != after[i]){
				return 0;
			}
		}
		return 1;
    }
};