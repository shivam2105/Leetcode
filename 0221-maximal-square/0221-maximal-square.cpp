class Solution {
public:
    int maximalSquare(vector<vector<char>>& v) {
        
        vector<vector<int>>matrix;
            for(auto x:v){
                vector<int>temp;
            for(auto y:x){
                temp.push_back(y-48);
            }
            matrix.push_back(temp);
        }
        
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]>0){
                int mini = min(matrix[i-1][j],matrix[i][j-1]);
                    
                if(mini>0 && matrix[i-1][j-1]>0){
                    matrix[i][j] = min(mini,matrix[i-1][j-1])+1;
                }
                }
            }
        }
        int ans = 0;
            for(auto x:matrix){
            for(auto y:x){
                cout<<y<<" ";
                ans=max(y*y,ans);
            }
            cout<<endl;
        }
        
        return ans;
        
    }
};