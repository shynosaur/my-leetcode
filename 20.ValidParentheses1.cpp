/*
20.Valid Parentheses
2017/8/9
*/

class Solution {
public:
    bool isValid(string s) {
		int len = s.length();
		if(len % 2)                                              // odd number is impossible
			return 0;
		if(len == 0)               
			return 1;
		if(s[0] != '(' && s[0] != '{' && s[0] != '[')            // the first element of s is not right
			return 0;
		stack<char> mystack;
		mystack.push(s[0]);                                      // since len != 0,s[0] exists
       for(int i = 1;i < len;i++){
		   if(s[i] == '(' || s[i] == '{' || s[i] == '[')
			   mystack.push(s[i]);
		   else if(s[i] == ')'){
			   if(mystack.top() == '(')
				   mystack.pop();
			   else
				   return 0;
		   }
		   else if(s[i] == '}'){
			   if(mystack.top() == '{')
				   mystack.pop();
			   else
				   return 0;
		   }
		   else if(s[i] == ']'){
			   if(mystack.top() == '[')
				   mystack.pop();
			   else 
				   return 0;
		   }
	   }
	   if(mystack.empty())
		   return 1;
	   else 
		   return 0;
    }
	
	/*
	  The following is the wrong answer.
	  I take if for granted that all elements are already in the stack,however,int the for loop,
	  I push elements into the stack from the start rather than consider the tail and pop.
		The right answer is to push from the start and pop once we meet ),},or ].
	*/
	/*bool isValid(string s) {
		int len = s.length();
		if(len % 2)                                              // odd number is impossible
			return 0;
		if(len == 0)               
			return 1;
		if(s[0] != '(' && s[0] != '{' && s[0] != '[')            // the first element of s is not right
			return 0;
		stack<char> mystack;
		mystack.push(s[0]);                                      // since len != 0,s[0] exists
		for(int i = 1;i < len;i++){
			if(s[i] == '(' || s[i] == '{' || s[i] == '[')
				mystack.push(s[i]);
			else if(s[i] == ')'){
				if(s[i-1] == '{' || s[i-1] == '[')
					return 0;
				string tmp = "";
				bool flag = false;
				while(!mystack.empty()){
					if(mystack.top() == '('){
						mystack.pop();
						flag = true;
						break;
					}
					else{
						tmp += mystack.top();
						mystack.pop();
					}
				}
				if(!flag) 
					return 0;
				for(int i = tmp.length() - 1;i >= 0;i--){
					mystack.push(tmp[i]);
				}
			}
			else if(s[i] == '}'){
				if(s[i-1] == '(' || s[i-1] == '[')
					return 0;
				string tmp1 = "";
				bool flag1 = false;
				while(!mystack.empty()){
					if(mystack.top() == '{'){
						mystack.pop();
						flag1 = true;
						break;
					}
					else{
						tmp1 += mystack.top();
						mystack.pop();
					}
				}
				if(!flag1)
					return 0;
				for(int i = tmp1.length() - 1;i >= 0;i--){
					mystack.push(tmp1[i]);
				}
			}
			else if(s[i] == ']'){
				if(s[i-1] == '(' || s[i-1] == '{')
					return 0;
				string tmp2 = "";
				bool flag2 = false;
				while(!mystack.empty()){
					if(mystack.top() == '['){
						mystack.pop();
						flag2 = true;
						break;
					}
					else{
						tmp2 += mystack.top();
						mystack.pop();
					}
				}
				if(!flag2)
					return 0;
				for(int i = tmp2.length() - 1;i >= 0;i--){
					mystack.push(tmp2[i]);
				}
			}
		}
		if(mystack.empty())
			return 1;
		else 
			return 0;
    }*/
};