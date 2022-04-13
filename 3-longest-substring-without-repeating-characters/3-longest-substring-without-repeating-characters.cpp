class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res =0;
        int n = s.length();
        for(int i=0;i<n;i++){
            
            vector<bool>v(200);
            
            for(int j=i;j<n;j++){
                
                if(v[s[j]]==true) break;
                
                else{
                    res = max(res,j-i+1);
                    v[s[j]] = true;
                }
            }
            
            v[s[i]] = false;
        }
        
        return res;
    }
};