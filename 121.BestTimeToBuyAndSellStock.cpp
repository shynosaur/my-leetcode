/*
121.Best Time to Buy and Sell Stock
2017/8/26
*/

/*
  method 1:time limit exceeded 199/200
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int res = 0;
        for(int i = 0;i < n;i++){
            int maxpro = 0;
            for(int j = i;j < n;j++)
                maxpro = max(maxpro,prices[j] - prices[i]);
            res = max(res,maxpro);
        }
        return res;
    }
};

/*
  method 2:DP
  res[i] = max(res[i-1],prices[i]-minprice),in which minprice denotes
  the least price among i-1 days
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0)
            return 0;
        int* res = new int[n];
        res[0] = 0;
        int minprice = prices[0];
        for(int i = 1;i < n;i++){
            minprice = min(minprice,prices[i - 1]);
            res[i] = max(res[i-1],prices[i] - minprice);
        }
        return res[n-1];
    }
};