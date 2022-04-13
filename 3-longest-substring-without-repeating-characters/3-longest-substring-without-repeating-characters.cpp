class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //O(n^2)
       int res =0;
        int n = s.length();
        
        /*
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
        */
        
        //O(n)
        
    
        int i=0;
        vector<int>v1(256,-1);
        
        for(int j=0;j<n;j++){
            
            i = max(i,v1[s[j]]+1);
            
            res = max(res,j-i+1);
            
            v1[s[j]] = j;
        }
        return res;
        
    }
};