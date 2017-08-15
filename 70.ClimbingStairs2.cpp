/*
70.Climbing Stairs
3ms
2017/8/15
*/

class Solution {
public:
    /*
	  climbStairs(i) = climbStairs(i-1) + climbStairs(i-2);
	  use array *ans to record each step,hence we can avoid computing repeatly
	*/
    int climbStairs(int n) {
        if(n == 1){
		    return 1;
		}
		if(n == 2){
			return 2;
		}
		int *ans = new int[n];
		ans[0] = 1;
		ans[1] = 2;
		for(int i = 2;i < n;i++){
			ans[i] =  ans[i - 1] + ans[i - 2];
		}
		return ans[n - 1];
    }
};
