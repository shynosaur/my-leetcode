/*
69.Sqrt(x)
binary search 6ms
2017/8/15
*/

class Solution {
public:
    // 6ms
    int mySqrt(int x) {
		if(x == 0)
			return 0;
		int left = 1,right = x;
		while(1){
			int mid = (left + right) / 2;
			if(mid > x / mid)
				right = mid - 1;
			else if(mid + 1 > x / (mid + 1))
				return mid;
			else 
				left = mid + 1;
		}
    }
	
	// 3ms
	int mySqrt(int x) {
        if(x <= 1)
            return x;
        if(x <= 3)
            return 1;
        int l = 1,r = x;
        while(l <= r){
            int mid = (l + r) / 2;
            if(mid > x / mid)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if(l * l == x)
            return l;
        else 
            return l - 1;
    }
};