//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   


    int maxl = 0;
    unordered_map<int,int>mp;
    int sum =0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if(sum ==0) maxl  =i +1;

        if(mp.find(sum) != mp.end()){
            maxl = max(maxl,i - mp[sum]);
        }
        else{
            mp[sum] = i;
        }
    }
    return maxl;
        
        
//  int count=0;

 
//  for(int i=0;i<n;i++){
//      int tr =0;
     
//      for(int j=i;j<n;j++){
//           tr += p[j];
          
          
//           if(tr == 0) {
              
//               count =  max(count,j-i+1);
//           }
//      }
//  }
//  return count;
    
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends