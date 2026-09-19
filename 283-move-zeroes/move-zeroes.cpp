class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lf= 0, rt=0 ;
        while(rt <= nums.size()-1){
            if (nums[rt]!=0){
                swap(nums[lf],nums[rt]);
                lf++;
            }
            rt++ ;    
        }    
    }
};