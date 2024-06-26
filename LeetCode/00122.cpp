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
