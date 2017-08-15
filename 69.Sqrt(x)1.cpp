/*
69.Sqrt(x)
brute force and time limit exceeded
2017/8/15
*/

class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
		while(1){
			if(ans <= x / ans && ans + 1 > x / (ans + 1))
				return ans;
		}
    }
};