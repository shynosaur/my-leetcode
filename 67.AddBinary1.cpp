/*
67.Add Binary
2017/8/15
*/

class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.length();
		int n = b.length();
        string ans = "";
		int carry = 0;
		int len = m > n ? m : n;
		while(m && n){
			ans = char(((a[--m] - '0') + (b[--n] - '0') + carry) % 2 + '0') + ans;
			carry = (a[m] - '0' + b[n] - '0' + carry) >= 2;
		}
		while(m){
			ans = char((a[--m] - '0' + carry) % 2 + '0') + ans;
			carry = (a[m] - '0' + carry) >= 2;
		}
		while(n){
			ans = char((b[--n] - '0' + carry) % 2 + '0') + ans;
			carry = (b[n] - '0' + carry) >= 2;
		}
        if(carry)
            ans = "1" + ans;
		return ans;
    }
	
	/*
	  simple code
	*/
    string addBinary(string a, string b) {
        int m = a.length();
		int n = b.length();
		string ans = "";
		int tmp = 0;
		while(m || n || tmp){
			tmp += m > 0 ? a[--m] - '0' : 0;
			tmp += n > 0 ? b[--n] - '0' : 0;
			ans = char(tmp % 2 + '0') + ans;
			tmp /= 2;
		}
		return ans;
    }	
};