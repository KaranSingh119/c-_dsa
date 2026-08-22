class Solution {
public:
    bool checkDivisibility(int n) {
        int org=n;
        int sum=0 ;
        int prdt=1;
        while (n>0){
            int store= n%10 ;
            n= n/10 ;
            sum+=store;
            prdt *=store; 
        }      
        int z=sum+prdt ;
        return org%z ==0 ;
    } 
};