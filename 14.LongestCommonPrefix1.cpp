/*
14.Longest Common Prefix
Brute Force
two for loops
2017/8/8
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
		int len = strs.size();
		if(len == 0) return ans; 
		for(int i = 0;i < strs[0].length();i++){
			for(int j = 1;j < len;j++){
				if(strs[j][i] != strs[0][i])
					return ans;
			}
			ans += strs[0][i];
		}
		return ans;
    }	
};