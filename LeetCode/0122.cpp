// Date: Sun Mar 31 2024 21:25:40 GMT+0900 (Korean Standard Time)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res{};
        for(int i=0; i<prices.size()-1; i++) {
            if (prices[i] < prices[i+1])
                res += prices[i+1] - prices[i];
        }
        return res;
    }
};
