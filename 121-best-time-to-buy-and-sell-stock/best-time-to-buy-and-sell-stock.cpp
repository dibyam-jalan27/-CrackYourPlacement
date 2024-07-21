class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minElement = prices[0];
        int mx = 0;
        for(int i = 0; i < n ; i++){
            if(prices[i] <= minElement) {
                minElement = prices[i];
            }
            else{
                mx = max(mx, prices[i]-minElement);
            }
        }
        return mx;
    }
};
