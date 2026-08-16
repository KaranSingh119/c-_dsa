class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum =INT_MIN ;
        int csum =0 ;
        for (int i:nums ){
            csum += i;
            maxsum =max(maxsum, csum);
            if (csum < 0){
                csum=0 ;
            }

        }
        return maxsum ;
    }
};