/*
167.Two Sum II - Input array is sorted
2017/9/8
*/

/*
  solution 1
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> mymap;
		vector<int> res;
		for(int i = 0;i < numbers.size();i++){
			mymap.insert(pair<int,int>(numbers[i],i));
			if(mymap.count(target - numbers[i])){
				int n = mymap[target - numbers[i]];
				if(n != i){
					res.push_back(n+1);
				    res.push_back(i+1);
					return res;
				}
			}
		}
    }
};

/*
  solution 2
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers,int target){
		vector<int> res(2,0);
		for(int i = 0,j = numbers.size()-1;i < j;){
			if(numbers[i] + numbers[j] == target){
				res[0] = i + 1;
				res[1] = j + 1;
				return res;
			}
			if(numbers[i] + numbers[j] > target)
				j--;
			else
				i++;
		}
	}	
};
