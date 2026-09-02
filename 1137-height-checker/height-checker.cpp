class Solution {
public:
void bubblesort(vector<int >&arr){
    int n=arr.size();
    for (int i=0 ;i< n-1;i++){
            for (int j=0 ;j<n-i-1;j++){
                if (arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]) ;
                }
            }
        }
    }
    int heightChecker(vector<int>& heights) {
        vector <int> sortedh= heights ;
        bubblesort(sortedh);

        int error=0 ;
        for (int i=0 ;i<sortedh.size(); i++){
            if (heights[i] !=sortedh[i]){
                error++ ;
            }
        }
        return error;
    }
};