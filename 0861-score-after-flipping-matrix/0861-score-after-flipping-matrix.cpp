class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
       vector<int>zeroes(grid[0].size());
       vector<int>ones(grid[0].size());

       for(int i=0;i<grid.size();i++){
        if(grid[i][0]==0){
        for(int j=0;j<grid[0].size();j++){
          grid[i][j]=!grid[i][j];  
        }
       }
       }
    // for(auto x:grid){
    // for(auto y:x){
    //     cout<<y<<" ";
    // }
    // cout<<endl;
    // }
    for(int i=0;i<grid.size();i++){
    for(int j=0;j<grid[0].size();j++){
    if(grid[i][j]==0)zeroes[j]++;
    else ones[j]++;
        }
       }
    for(int i=0;i<grid.size();i++){
    for(int j=0;j<grid[0].size();j++){
    if(zeroes[j]>ones[j]){
        grid[i][j]=!grid[i][j];
    } 
        }
       }
    // for(auto x:grid){
    // for(auto y:x){
    //     cout<<y<<" ";
    // }
    // cout<<endl;
    // }
    int ans = 0;
    for(auto x:grid){
        string s="";
    for(auto y:x){
        s+=char(y+48);
    }
    bitset<32>b(s);
    // cout<<s<<" ";
    ans+=b.to_ulong();
    }

    return ans;  
    }
};