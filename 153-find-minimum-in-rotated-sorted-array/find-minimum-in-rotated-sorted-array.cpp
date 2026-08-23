class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0, end=nums.size()-1;
        int minvalue=INT_MAX;
        while (start<= end){
            int mid= start +(end-start)/2;
            if (nums[start]<=nums[mid]){
                minvalue=min(minvalue ,nums[start]) ;
                start=mid+1 ;
            }else{
                minvalue=min(minvalue, nums[mid]) ;
                end=mid-1;
            }
            
        }
        return minvalue;    
    }
};