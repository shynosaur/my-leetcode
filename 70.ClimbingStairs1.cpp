/*
70.Climbing Stairs
recurrence:Time Limit Exceeded
2017/8/15
*/

class Solution {
public:
    /*
	  climbStairs(i) = climbStairs(i-1) + climbStairs(i-2);
	*/
    int climbStairs(int n) {
        if(n == 1)
			return 1;
		if(n == 2)
			return 2;
		return climbStairs(n - 1) + climbStairs(n - 2);
    }
};
