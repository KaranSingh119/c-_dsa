class Solution {
public:
    int reverse(int x) {
        long long n=x;
        long long ans=0;

        while(n !=0){
            long long degits= n%10;
            n=n/10;
            ans = ans*10 + degits;
        }

        if (ans< INT_MIN || ans> INT_MAX){
            return 0;
        }
        return ans;
    }
};