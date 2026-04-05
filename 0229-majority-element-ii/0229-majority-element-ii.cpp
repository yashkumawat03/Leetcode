class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        // for(int i=0;i<n;i++){
        //     if(ans.size()==0 || ans[0]!=nums[i]){
        //         int element = nums[i];
        //         int cnt = 1;
        //         for(int j=i+1;j<n;j++){
        //             if(nums[i]==nums[j]){
        //             cnt++;
        //             }
        //         }
        //         if(cnt>n/3)  ans.push_back(nums[i]);
        //     }
        //     if(ans.size()==2) break;
        // }
        // unordered_map<int,int> mpp;
        // int min = n/3+1;
        // for(int i=0;i<n;i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]]==min) ans.push_back(nums[i]);
        //     if(ans.size()==2) break;
            
        // }
        // // for(auto it : mpp){
        // //     if(it.second>n/3) ans.push_back(it.first);
        // // }
        // return ans;

        int cnt1 = 0,cnt2 =0;
        int ele1 = INT_MIN, ele2 = INT_MIN;
        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=ele2){
                cnt1 = 1;
                ele1 = nums[i];
            }
            else if(cnt2==0 && nums[i]!=ele1){
                cnt2 = 1;
                ele2 = nums[i];
            }
            else if(nums[i]==ele1) cnt1++;
            else if(nums[i]==ele2) cnt2++;

            else{
                cnt1--;
                cnt2--;
            }
        }
        int count1 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1) count1++;
        }
        if(count1>n/3) ans.push_back(ele1);

        int count2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele2) count2++;
        }
        if(count2>n/3) ans.push_back(ele2);

        return ans;
    }
};