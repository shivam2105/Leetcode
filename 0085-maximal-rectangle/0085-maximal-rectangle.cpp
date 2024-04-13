class Solution {
public:
    int maximalRectangle(vector<vector<char>>& v) {
       
        vector<vector<int>>matrix;
        for(auto y:v){
            vector<int>temp;
            for(auto x:y){
                temp.push_back(x-48);
            }
            matrix.push_back(temp);
        }
        
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i-1][j]>0 && matrix[i][j]>0){
                    matrix[i][j]+=matrix[i-1][j];
                }
            }
        }
        
        for(auto x:matrix){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
        
        int n = matrix[0].size();
        int ans = 0;
        for(int i=0;i<matrix.size();i++){
            stack<int>st;
            for(int j=0;j<matrix[0].size();j++){
                
                while(st.size() && (matrix[i][j]<=matrix[i][st.top()])){
                    int height = matrix[i][st.top()];
                    st.pop();
                    int width = st.size()?j-st.top()-1:j;
                    ans = max(ans,width*height);
                }
                st.push(j);
                int temp=j+1;
                while(temp == n && st.size()){

                    int height = matrix[i][st.top()];
                    st.pop();
                    ans = max(ans,height*(st.size()?temp-st.top()-1:temp));
                }

                
            } 
        }
        return ans;
    }
};