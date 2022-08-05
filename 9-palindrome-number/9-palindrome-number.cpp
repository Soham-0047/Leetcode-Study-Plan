class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        int lo =0;
        // if(x<0){
        //     x = -(x);
        // }
        // cout<<x<<endl;
        int store = x;
        if(x<0 || (x%10 ==0 && x !=0)) return false;
        
        while(lo<x){
        
            lo =  lo * 10 + x % 10;
            
            x /=10;
        }
        // cout<<store<<" "<<x<<endl;
        
       return (lo == x || x == lo/10);
        
     
        
    }
};