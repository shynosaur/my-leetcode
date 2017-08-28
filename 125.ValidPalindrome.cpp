/*
125.Valid Palindrome
2017/8/27
*/

/*
  method 1
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        if(n == 0)
            return true;
        for(int i = 0;i < n;i++){
            if(s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
        }
        int l = 0,r = n-1;
        while(l < r){
            while(s[l] < 48 || (s[l] > 57 && s[l] < 65) || s[l] > 90)
                l++;
            while(s[r] < 48 || (s[r] > 57 && s[r] < 65) || s[r] > 90)
                r--;
            if(l < r && s[l] == s[r]){
                l++;
                r--;
            }
            else if(l >= r)
                return true;
            else
                return false;
        }
        return true;
    }
};

/*
  method 2:the same thinking
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int i(0), j(s.length());
        char x, y;
        while (i < j) {
            if (!isalnum(s[i]))
                i++;
            else if (!isalnum(s[j]))
                j--;
            else {
                x = s[i++];
                y = s[j--];
                if (x != y && tolower(x) != tolower(y))
                    return false;
            }
        }
        return true;
    }
};