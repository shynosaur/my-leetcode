/*
1.Two Sum
one-pass map&two-pass map
2017/8/4
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mymap;
		vector<int> ans;
		/*
		  Here is the one-pass map.
		  Using fuction insert(),we can not insert duplicate elements successfully.
		  Because the array is monotonic increasing,we at first insert smaller elements.
		  In this case,once we find such "n",we can make certain that n is smaller than i,
		  for that n which is greater than i has not been inserted yet.
		  Hence,we need to output n first and then i.
		*/
		for(int i = 0;i < nums.size();i++){
		    mymap.insert(pair<int,int>(nums[i],i));
			if(mymap.count(target - nums[i])){
				int n = mymap[target -  nums[i]];
				if(n != i){
					ans.push_back(n);
					ans.push_back(i);
					return ans;
				}
			}
		}
		/*
		  Here is the two-pass map.
		  Using array,we can insert duplicate elements and the new element will cover the old one.
		  The same goes with the one-pass algorithm,smaller elements are inserted first.
		  In the second for-loop,once we find such complement,we can make curtain its mapvalue is greater than i's,
		  for that if not,its situation has been looped and the right answer has been returned.
		  Hence,we need to output i first and then complement's index.
		*/
		for(int i = 0;i < nums.size();i++){
            mymap[nums[i]] = i;
        }
        for(int i = 0;i < nums.size();i++){
            int complement = target - nums[i];
           if(mymap.count(complement) && mymap[complement] != i){
               ans.push_back(i);
               ans.push_back(mymap[complement]);
               return ans;
           }
        }
    }
};