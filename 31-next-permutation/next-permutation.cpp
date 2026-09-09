class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int piv=-1 , n=arr.size();
        for (int i=n-2 ;i >=0 ;i--){
            if (arr[i]< arr[i+1]){
                piv =i ;
                break ;
            }
        }
        if (piv==-1){
            reverse(arr.begin() ,arr.end());
            return ;
        }
        for (int i=n-1 ; i>piv ;i--){
            if(arr[i] > arr[piv]){
                swap(arr[i], arr[piv]);
                break ;
            }
        }
     //   reverse(arr.begin()+piv +1 ,arr.end());  //do as same as the code written below
        int i=piv+1 ,j=n-1 ;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++ , j-- ;
            
        }

    }
};