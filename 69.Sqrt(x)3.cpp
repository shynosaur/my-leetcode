/*
69.Sqrt(x)
Newton's Iterative Method
2017/8/15
*/

class Solution {
public:
    /*
	  x_{n+1}=x_n-f(x_n)/f'(x_n)
	  assume f(x)=x^2-n,we can get
	  x_{n+1}=1/2(x_n+n/x_n)
	*/
    int mySqrt(int x) {
		double ans = x;
		double delta = 0.0001;
		while(fabs(pow(ans,2) - x) > delta){
			ans = (ans + x / ans) / 2;
		}
		return ans;
    }
	
	/*
	  integer Newton
	*/
	long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
};