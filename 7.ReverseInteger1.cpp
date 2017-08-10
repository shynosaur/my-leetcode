/*
2.Reverse Integer
turn int into string
My own solution is so complicated...
2017/8/5
*/

class Solution {
public:
    int reverse(int x) {
		if(x != 0&& x != 2147483648){
            int arr[10];
		    int tmp = abs(x);
		    int cnt = 0;
		    while(tmp > 0){
			    arr[cnt++] = tmp % 10;
			    tmp /= 10;
		    }
		    int ans = 0;
		    for(int i = 0;i < cnt - 1;i++){
			    for(int j = cnt - 2 - i; j > 0;j--){
				    arr[i] *= 10;
			    }
			    ans += arr[i];
		    }
		    if(cnt < 10 || ans < 214748364){
			    ans = ans * 10 + arr[cnt - 1];
			    if(x < 0){
				    ans = 0 - ans;
			    }
			    return ans;
		    }
		    else if(ans > 214748364){
			    return 0;
		    }
		    else{
			    if(x > 0 && arr[9] <=7){
				    ans = ans * 10 + arr[9];
			    }
			    else if(x < 0 && arr[9] <= 8){
				    ans = 0 - (ans * 10 + arr[9]);
			    }
			    else{
				    ans = 0;
			    }
			    return ans;
		    }
		}
		else{
			return 0;
		}
    }
};