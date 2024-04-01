class Solution {
public:
    int lengthOfLastWord(string s) {
       int count  = 0;
        int lastIndex = s.length()-1;
        while(s[lastIndex]==' '){
            lastIndex--;
        }
        while(lastIndex>=0 && s[lastIndex]!=' '){
            lastIndex--;
            count++;
        }
        return count;
        
    }
};