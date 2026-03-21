class Solution {
    
public:
    // bool ls(vector<int> &nums, int num){
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==num){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    // int longestConsecutive(vector<int>& nums) {
    //     int n = nums.size();
    //     int longest = 1;
        
    //     for(int i=0;i<n;i++){
    //         int x = nums[i];
    //         int cnt = 1;
    //         while(ls(nums,x+1)==true){
    //             x+=1;
    //             cnt++;
    //         }
    //         longest=max(cnt,longest);
    //     }
    //     return longest;
    int longestConsecutive(vector<int>& nums){
    int n = nums.size();
    if(n==0)  return 0;
    // sort(nums.begin(),nums.end());
    // int longest = 1;
    // int lastsmaller = INT_MIN;
    // int cnt = 0;
    // for(int i=0;i<n;i++){
    //    if(nums[i]-1==lastsmaller){
    //     cnt+=1;
    //     lastsmaller=nums[i];
    //    } 
    //    else if(nums[i]!=lastsmaller){
    //     cnt = 1;
    //     lastsmaller = nums[i];
    //    }
    //    longest = max(cnt,longest);
    // }
    // return longest;  

    int longest = 1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    for(auto it : st){
        if(st.find(it-1)==st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1)!=st.end()){
                x+=1;
                cnt+=1;
            }
            longest = max(cnt,longest);
        }
        
    }
    return longest;
  }
};