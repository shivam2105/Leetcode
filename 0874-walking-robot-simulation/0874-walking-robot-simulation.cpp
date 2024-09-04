class Solution {
public:
    set<int> se;
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        map<vector<int>,int> mp;
        for(auto &x: obstacles){
            mp.insert({x,1});
        }
        int dir = 0;
        int xcoord = 0;
        int ycoord = 0;
        for(auto &x:commands){
            if(x>0)
            func(xcoord, ycoord, dir>=0?dir:dir+4, x, mp);
            else if(x==-1)
            dir = (dir+1)%4;
            else if(x==-2)
            dir = (dir-1)%4;
        }
        return *se.rbegin();
        
    }
    void func(int &x, int &y, int dir, int k, map<vector<int>,int> &mp){
        if(k == 0) {se.insert(x*x+y*y);return;}
        if(dir == 0){
            y++;
            if(mp[{x,y}] == 1){y--;se.insert(x*x+y*y);return;}
            func(x,y,dir,--k,mp);
        }
        else if(dir == 1){
            x++;
            if(mp[{x,y}] == 1){x--;se.insert(x*x+y*y);return;}
            func(x,y,dir,--k,mp);
        }
        else if(dir == 2){
            y--;
            if(mp[{x,y}] == 1){y++;se.insert(x*x+y*y);return;}
            func(x,y,dir,--k,mp);
        }
        else if(dir == 3){
            x--;
            if(mp[{x,y}] == 1){x++;se.insert(x*x+y*y);return;}
            func(x,y,dir,--k,mp);
        }       
    }

    
};