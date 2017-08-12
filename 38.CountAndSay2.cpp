/*
38.Count and Say
"fake-recurrence",using for loop
3ms
2017/8/12
*/

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
			return "1";
		if(n == 2)
			return "11";
		string ans = "11";
		for(int i = 3;i <= n;i++){             // similar to recurrence
			string tmp = "";
			int len = ans.length();
			int cnt = 1;
			for(int j = 0;j < len;j++){
				if(ans[j + 1] != ans[j]){
					tmp += cnt + '0';
					tmp += ans[j];
					cnt = 1;
				}
				else
					cnt++;
			}
			ans = tmp;
		}
		return ans;
    }
};