class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> s_map, t_map;
        int i = 0;
        while(i < s.length())
        {
            if(s_map.count(s[i])) { if(s_map[s[i]]!=t[i]) return false; }
            else if(t_map.count(t[i])) { if(t_map[t[i]] != s[i]) return false; }
            else s_map[s[i]] = t[i], t_map[t[i]] = s[i];
            i++;
        }
        return true;
    }
};