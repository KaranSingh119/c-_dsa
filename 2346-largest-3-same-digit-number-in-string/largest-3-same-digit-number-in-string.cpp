class Solution {
public:
    string largestGoodInteger(string num) {
        string maxnum="";
        for (int i=0 ;i < num.length();i++){
            if (num[i]==num[i+1] && num[i]==num[i+2] ){
            maxnum= max(maxnum , num.substr(i,3));
            }
        }
        return maxnum;
    }
};