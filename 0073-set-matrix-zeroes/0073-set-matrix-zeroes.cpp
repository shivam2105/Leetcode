class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        map<int,bool>mp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    mp[i]=true;
                    mp[matrix.size()+j]=true;
                    cout<<i<<" "<<matrix.size()+j<<endl;
                }
                
                
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(mp[i]==true || mp[matrix.size()+j]==true){matrix[i][j]=0;
                 cout<<i<<" "<<matrix.size()+j<<endl;}
            }
        }
        
    }
};