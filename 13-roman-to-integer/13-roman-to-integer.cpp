class Solution {
public:
    int romanToInt(string s) {
        
        int max =0;
        int ans =0;
        int n = s.length();
        for(int i=n-1;i>=0;i--){
            
         switch(s[i]){
                 case 'I':
                 max = 1;
                 break;
                 case 'V':
                 max = 5;
                 break;
                 case 'X':
                 max = 10;
                 break;
                 case 'L':
                 max = 50;
                 break;
                 case 'C':
                 max = 100;
                 break;
                 case 'D':
                 max = 500;
                 break;
                 case 'M':
                 max = 1000;
                 break;
                 }
            
            if(4 * max < ans) ans -= max;
            else ans += max;
        }
        return ans;
       
    }
};