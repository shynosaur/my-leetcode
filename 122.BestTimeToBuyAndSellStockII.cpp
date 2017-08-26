/*
122.Best Time to Buy and Sell Stock II
2017/8/26
*/

/*
  method 1:DP
  attention:we can sell and then buy at the same day
  res[i] = max(res[i-1],res[i-1]+prices[i]-price[i-1])
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0 || n == 1)
            return 0;
        int* res = new int[n];
        res[0] = 0;
        for(int i = 1;i < n;i++){
            res[i] = max(res[i-1],res[i-1]+prices[i]-prices[i-1]);
        }
        return res[n-1];
    }
};

/*
  method 2:without extra space
  since we can sell and then buy at the same day,
  if prices[i] > prices[i-1],we can sell buy it in i-1th day,and sell it in ith day
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        for(int i = 1 ; i < prices.size(); ++i)
        {
            if ( prices[i] > prices[i-1])
                profit += prices[i] - prices[i-1];
        }
       return profit; 
    }
};