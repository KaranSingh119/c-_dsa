class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n= nums.size();
        int sp=1 ;
        
        if (n<1){
            return 0;
        }
        int unq=0 ;    
        for (int i=1 ; i<n ;i++){
            if (nums[i]!=nums[unq]){
                unq++ ;
                nums[unq]=nums[i];
                
            }
        }
        return unq+1;
    }
};