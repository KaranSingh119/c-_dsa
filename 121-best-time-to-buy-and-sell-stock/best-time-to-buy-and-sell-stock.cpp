class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0];
        int profit =0;

        for (int i :prices ){
            if (minp > i){
                minp=i;
            }
            else{
                profit =max(i-minp,profit);
            }
        }
        return profit;
    }
};