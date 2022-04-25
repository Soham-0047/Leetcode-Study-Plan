class Solution {
    public:
    void findcombinationsum(int index,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        if(index==arr.size()){
            if(target ==0) ans.push_back(ds);
            
        return;
        }
        
        if(arr[index]<=target){
            //First put the element in ans
            ds.push_back(arr[index]);
            findcombinationsum(index,target-arr[index],arr,ans,ds);
            //We have to remove the element when the first recursion completed
            ds.pop_back();
            
            
        }
        findcombinationsum(index+1,target,arr,ans,ds);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcombinationsum(0,target,candidates,ans,ds);
        return ans;
    }
};