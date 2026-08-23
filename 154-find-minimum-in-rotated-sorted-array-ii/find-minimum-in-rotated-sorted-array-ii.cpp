class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int  st=0 ,end=nums.size()-1;
        int minv=INT_MAX;

        while(st<=end){
            int mid=st+(end-st)/2 ;
            if (nums[st]==nums[mid] && nums[mid]== nums[end]){
                minv =min(minv ,nums[st]);
                st++;
                end--;
                continue;
            }
            if (nums[st]<=nums[mid]){
                minv=min(minv , nums[st]);
                st=mid+1 ;
            }else{
                minv=min(minv ,nums[mid]);
                end= mid-1 ;
            }
        }
        return minv;
    }
};