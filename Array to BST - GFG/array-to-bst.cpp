// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
//create a helper function
void vectorutility(vector<int>&arr,int low,int high,vector<int>&ds){
    int mid;
    if(low<=high){
        mid = low + (high-low)/2;
        ds.push_back(arr[mid]);
        vectorutility(arr,low,mid-1,ds);
        vectorutility(arr,mid+1,high,ds);
    }
}
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        
        vector<int>ds;
        vectorutility(nums,0,nums.size()-1,ds);
        return ds;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends