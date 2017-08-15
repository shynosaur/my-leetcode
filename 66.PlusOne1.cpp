/*
66.Plus one
2017/8/15
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
		for(int i = len - 1;i >= 0;i--){
			if(digits[i] == 9)
				digits[i] = 0;
			else{
				digits[i]++;
			    return digits;
			}
		}
		digits[0] = 1;
		digits.push_back(0);
		return digits;
    }
	
	vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
		bool carry = true;
		for(int i = len - 1;i >= 0 && carry;i--){
			carry = (++digits[i] %= 10) == 0;
		}
		if(carry)
			digits.insert(digits.begin(),1);
		return digits;
    }
};