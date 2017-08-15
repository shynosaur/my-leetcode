/*
70.Climbing Stairs
0ms
2017/8/15
*/

class Solution {
public:
    /*
	  use prev to represent i-2,cur to represent i-1,
	  compute the newest value and stores it in tmp,
	  and then replace prev with tmp,replace cur with tmp.
	*/
    int climbStairs(int n) {
        int prev = 1,cur = 1;
		for(int i = 2;i <= n;i++){
			int tmp = prev + cur;
			prev = cur;
			cur = tmp;
		}
		return cur;
    }
};
