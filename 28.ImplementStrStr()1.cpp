/*
28.Implement strStr()
2017/8/12
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.length();
		int length = haystack.length();
		if(len == 0)
			return 0;
		if(length == 0 && len != 0)
			return -1;
		for(int i = 0;i <= length - len;i++){
			int index = 0;
			for(int j = i;j < i + len;j++){
				if(haystack[j] != needle[index++])
					break;
				if(j == i + len -1)
					return i;
			}
		}
		return -1;
    }
};