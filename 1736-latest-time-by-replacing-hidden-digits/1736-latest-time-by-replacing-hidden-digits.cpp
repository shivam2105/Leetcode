class Solution {
public:
    string maximumTime(string time) {
      vector<char>v={'2','9','0','5','9'};
      for(int i=0;i<5;i++){
        if(i==1 && time[i]!='?' && time[i]>'3'){
            if(time[i-1]>'1')
            time[i-1]='1';
        }
        if(time[i]=='?'){
            if(i==1 && time[i-1]=='2')time[i]='3';
            else
            time[i]=v[i];
        }
      } 
      return time; 
    }
};