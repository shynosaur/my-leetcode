/*
119.Pascal's Triangle II
2017/8/26
*/

/*
  method 1
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res(rowIndex+1,vector<int>());
		res[0].push_back(1);
		if(rowIndex == 0)
			return res[0];
		res[1].push_back(1);
		res[1].push_back(1);
        if(rowIndex == 1)
            return res[1];
        for(int i = 2;i <= rowIndex ;i++){
            res[i].push_back(1);
            for(int j = 1;j < i;j++)
                res[i].push_back(res[i-1][j-1] + res[i-1][j]);
            res[i].push_back(1);
        }
        return res[rowIndex];     
    }
};

/*
  method 2
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1,0);
        res[0] = 1;
        for(int i = 1;i <= rowIndex;i++){
            for(int j = i;j >= 1;j--)
                res[j] = res[j] + res[j - 1];
        }
        return res;
    }
};