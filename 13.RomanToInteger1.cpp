/*
13.RomanToInteger1
2017/8/8
*/

class Solution {
public:
    int romanToInt(string s) {
        int value[256];
		value['I'] = 1;
		value['V'] = 5;
		value['X'] = 10;
		value['C'] = 100;
		value['M'] = 1000;
		value['L'] = 50;
		value['D'] = 500;
		int ans = 0;
		for(int i = 0;i < s.length();i++){
			if(i + 1 == s.length() || value[s[i + 1]] <= value[s[i]])
				ans += value[s[i]];
			else
				ans -= value[s[i]];
		}
		return ans;
    }
	
	/*
	  Int to Roman
	*/
	string intToRoman(int num) {   
        if(num <= 0) return "";  
        string ret = "";  
        static int number[13] = {1000, 900, 500, 400, 100,90, 50, 40, 10, 9, 5, 4, 1};  
        static string flags[13] = {"M","CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};  
          
        for(int i = 0; i < 13 && num > 0; i++){   
            if(num < number[i]) continue;  
            // cout<< i << " " << number[i] << " - " <<flags[i] << endl;  
            while(num >= number[i]){  
                num-= number[i];  
                ret += flags[i];  
            }  
              
        }  
        return ret;   
    }  
};