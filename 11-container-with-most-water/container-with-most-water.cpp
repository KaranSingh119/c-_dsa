class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0 ,rp=height.size()-1 ;
        int maxw=0;

        while(lp<rp){
            int w= rp-lp ; 
            int h =min (height[lp],height[rp]) ;
            int area =w *h;
            maxw=max(area , maxw);
             if(height[lp]<height[rp]){
            lp++ ;
            }else{
                rp-- ;
            }
        }  
       
    return maxw;
    }
};