//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
  int cross(vector<int>&a,int l,int r,int k){

    if(a[r] <= k) return r;
    if(a[l] >k) return l;

    int m = l +(r-l) /2;

    if(a[m] <= k && k<a[m+1]) return m;

    if(a[m] < k)  return cross(a,m+1,r,k);

    return cross(a,l,m-1,k);

}
    vector<int> printKClosest(vector<int> a, int n, int t, int k) {
        // code here
        
        // int n = a.size();
    vector<int> tmp;
    int l =cross(a,0,n-1,k); //find the crossover

    int r = l+1;
    int c =0;


    if(a[l] == k)  l--; 

    while(l>=0 && r<n && c<t){

        if(k-a[l] < a[r]-k){
            // cout<<a[l]<<" ";
            tmp.push_back(a[l]);
            l--;
        }
        else{
            // cout<<a[r]<<" ";
            tmp.push_back(a[r]);
           r++; 
        } 
        c++;
    }

    //if no right elements
    while(c<t && l>=0){
        // cout<<a[l]<<" ";
        tmp.push_back(a[l]);
        l--;
        c++;
    }

    while(c<t && r<n){
        // cout<<a[r]<<" ";
        tmp.push_back(a[r]);
        r++;
        c++;
    }

    return tmp;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends