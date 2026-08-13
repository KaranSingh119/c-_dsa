class Solution {
public:
    bool isPalindrome(int x) {
        if (x< 0){
            return false ;
        }
        if (x== 0){
            return true ;
        }
        long long y=0;
        int org=x;

        while (x>0){
            int z= x%10 ;
            x=x/10; 
            y= y*10 + z ;
        }
        if (y==org){
            return y ;
        }
    return 0;    
    }
};