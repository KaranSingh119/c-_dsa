class Solution {
public:
    int digitsum(int b){
        int x=0;
        while(b>0){
            int a= b%10 ;
            b=b/10;
            x= x+a;
        } 
        return x ;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i=0 ;i < nums.size();i++){
            if (nums[i]>9){
                int b=nums[i]; 
                if( digitsum(b) ==i){
                    return i ;
                }      
            }
            if (nums[i]==i && nums[i]<10) {
                return i;
            }
        }  
    return -1;
    }
};