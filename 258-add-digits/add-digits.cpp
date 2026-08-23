class Solution {
public:
    int addDigits(int num){
        if (num <1){
            return 0;
        }
        int sum=0 ;
        while (num >0){
            int n=num %10;
            num=num/10;
            sum +=n; 
        }    
        while (sum >=10){
            int ans=0 ;

            while (sum >0){
                int n=sum %10;
                sum /=10;
                ans +=n;
            }
            sum=ans;
        }
        return sum;
    }
    
};