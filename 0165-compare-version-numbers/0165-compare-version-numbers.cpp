class Solution {
public:
    int compareVersion(string version1, string version2) {
    vector<int>v1;
    vector<int>v2;
    int i=0;
    string temp = "";
    while(i<version1.length()){
        
        if(version1[i]=='.'){v1.push_back(stoi(temp)),temp="";i++;continue;};
        temp+=version1[i];
        if(i==version1.length()-1)v1.push_back(stoi(temp));
        i++;

    }
    i=0;
    temp="";
        while(i<version2.length()){
        
        if(version2[i]=='.'){v2.push_back(stoi(temp)),temp="";i++;continue;};
        temp+=version2[i];
        if(i==version2.length()-1)v2.push_back(stoi(temp));
        i++;

    }
    // for(auto x:v1)cout<<x<<" ";
    // cout<<endl;
    // for(auto x:v2)cout<<x<<" ";
    int size1 = 0;
    int size2 = 0;
    while(size1<v1.size() && size2<v2.size()){
        if(v1[size1]>v2[size2])return 1;
        else if(v1[size1]<v2[size2])return -1;
        else size1++,size2++;
    }
    if(size1==v1.size() && size2!=v2.size()){
       
       for(int i=size2;i<v2.size();i++){
       if(v2[i]!=0) return -1;}
    }
    else if(size2==v2.size() && size1!=v1.size()){

       for(int i=size1;i<v1.size();i++){
       if(v1[i]!=0) return 1;}
    }
    return 0;
    }

};