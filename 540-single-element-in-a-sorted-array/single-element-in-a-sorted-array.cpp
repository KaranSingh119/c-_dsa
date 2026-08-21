class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=0;
        for (int i : nums){
            n=n^i ;
        }
        return n;
    }
};