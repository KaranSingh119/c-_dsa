class Solution {
public:
    bool isvalied(vector<int> &nums ,int k,int m,int maxpage){
        int stu=1 ,page=0 ;
        for (int i =0 ;i<m ; i++){
            if (nums[i]> maxpage){
                return false ;
            }
            if (page +nums[i] <= maxpage){
                page +=nums[i];
            }else{
                stu++ ;
                page= nums[i] ;
            }
        }
         return stu > k ? false : true ;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        for (int i : nums){
            sum+=i ;
        }
        int ans=-1;
        int start=0 ,end=sum ;

        while (start <= end){
            int mid= start +(end-start)/2 ;

            if (isvalied(nums,k,nums.size(), mid)){
                ans=mid ;
                end= mid-1;
            }else{
                start =mid+1 ;
            }
        }
        return ans ;
    }


};