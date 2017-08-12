/*
38.Count and Say
recurrence,slow 
18ms
2017/8/12
*/

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
			return "1";
		if(n == 2)
			return "11";
		string last = countAndSay(n - 1);
		int len = last.length();
		string ans = "";
		int start = 0;
		for(int i = 0;i < len;i++){
			if(last[i] != last[start]){                                    // the number of last[start] is i-start
				ans = ans + to_string(i - start) + last[start];
				start = i;
			}
			else if(i == len - 1){                                         // if i reaches the end,and the end equals to last[start],i-start+1
				ans = ans + to_string(i - start + 1) + last[start];
			}
		}
		if(start == len - 1)                                               // if the end is the single one,we should add it to the answer
			ans = ans + to_string(1) + last[len - 1];                      // if we skips this step,in the last for loop,last[len-1]!=last[start]
		                                                                   // we only add the number before the end to the answer,and ignores the single end.
		return ans;
    }
	
	    /*
		  the same goes with the above
		*/
	    string countAndSay(int n) {
        if(n == 1)
			return "1";
		if(n == 2)
			return "11";
		string last = countAndSay(n - 1);
		string ans = "";
		int len = last.length();
		int cnt = 1;
		for(int i = 0;i < len;i++){
			if(last[i+1] == last[i]){
				cnt++;
			}
			else{
				ans = ans + to_string(cnt) + last[i];
				cnt = 1;
			}
		}
		return ans;
    }
};