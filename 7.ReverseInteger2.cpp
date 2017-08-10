/*
2.Reverse Integer
use long long
2017/8/5
*/

class Solution {
public:
    int reverse(int x) {
        const int max = 0x7fffffff;
		const int min = 0x80000000;
		
		long long sum = 0;
		
		int tmp;
		while(x != 0){
			tmp = x % 10;
			sum = sum * 10 + tmp;
			if(sum > max || sum < min){
				return 0;
			}
			x /= 10;
		}
		return sum;
    }
};