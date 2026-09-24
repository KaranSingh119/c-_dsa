class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string str="";
        for(int i :nums){
            str += to_string(i) ;
        }
        vector<int>ans;
        for(int i=0 ;i < str.size();i++){
            ans.push_back(str[i]-'0');
        } 
        return ans;
    }
};