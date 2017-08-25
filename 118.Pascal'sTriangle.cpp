/*
118.Pascal's Triangle
2017/8/25
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows == 0)
            return res;
        vector<int> one;
        one.push_back(1);
        res.push_back(one);
        if(numRows == 1)
            return res;
        vector<int> two;
        two.push_back(1);
        two.push_back(1);
        res.push_back(two);
        if(numRows == 2)
            return res;
        for(int i = 1;i < numRows - 1;i++){
            vector<int> tmp;
            tmp.push_back(1);
            for(int j = 1;j <= i;j++)
                tmp.push_back(res[i][j-1] + res[i][j]);
            tmp.push_back(1);
            res.push_back(tmp);
        }
        return res;
    }
};

***vector<vector<int>> result(numRows, vector<int>());
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows,vector<int>());
        if(numRows == 0)
            return res;
		res[0].push_back(1);
        if(numRows == 1)
            return res;
		res[1].push_back(1);
		res[1].push_back(1);
        if(numRows == 2)
            return res;
        for(int i = 2;i < numRows;i++){
            res[i].push_back(1);
            for(int j = 1;j < i;j++)
                res[i].push_back(res[i-1][j-1] + res[i-1][j]);
            res[i].push_back(1);
        }
        return res;
    }
};
