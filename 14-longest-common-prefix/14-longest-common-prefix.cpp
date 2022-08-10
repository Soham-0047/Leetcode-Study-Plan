class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
//         int n = strs.size();
        
//         string com;
        
//         for(int i=0;i<n;i++){
//             if(strs[i].at(0) == strs[i+1].at(0)) com += strs[i];
//         }
//         return com;
        
        int n = strs.size();
        
        if(n==0)return "";
        if(n==1)return strs[0];
        
        sort(strs.begin(),strs.end());
        
        int el = min(strs[0].length(),strs[n-1].length());
        
        string f = strs[0];
        string l = strs[n-1];
        int i=0;
        while(i<el && f[i]==l[i]) i++;
        
    
    string pre= f.substr(0,i);
        
    return pre;
    }
};