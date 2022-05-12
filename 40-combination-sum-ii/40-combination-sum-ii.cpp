class Solution {
public:
    
    void find(int i,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds,int tar){
        if(tar == 0) {
            ans.push_back(ds);
            return;
        }
        
        for(int j=i;j<arr.size();j++){
            if(j>i && arr[j]==arr[j-1]) continue;
            
            if(arr[j]>tar) break;
            
            ds.push_back(arr[j]);
            find(j+1,arr,ans,ds,tar-arr[j]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        find(0,candidates,ans,ds,target);
        return ans;
        
    }
};