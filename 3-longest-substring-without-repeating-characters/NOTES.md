```
bool isrepeat(string s,int i,int j){
​
vector<bool>visited(35);
for(int k =i;k<=j;k++){
if(visited[s[k]-'a']== true) return false;
​
visited[s[k]-'a']= true;
}
return true;
}
int lengthOfLongestSubstring(string s) {
int n = s.length();
int res =0;
int n1 =0;
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
if(isrepeat(s,i,j)){
res  = max(res ,j-i+1);
}
}
}
return res;
}
```