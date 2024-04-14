class Solution {
public:
    int titleToNumber(string columnTitle) {
       
        long long number = 1;
        long long ans = 0;
        for(int i=columnTitle.length()-1;i>=0;i--){
            ans+= ((columnTitle[i])-64)*number;
            number*=26;
        }
        return ans;
    }
};