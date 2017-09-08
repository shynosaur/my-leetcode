/*
168.Excel Sheet Column Title
2017/9/8
*/

class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while(n){
            int tmp = n % 26;
            n /= 26;
            if(tmp == 0){
                res += 'Z';
                n--;
            }
            else{
                res += ('A' + tmp - 1);
            }
        }
        string ans = "";
        for(int i = res.length()-1;i >= 0;i--)
            ans += res[i];
        return ans;
    }
};