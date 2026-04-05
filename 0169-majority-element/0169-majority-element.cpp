class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // for(int i=0;i<n;i++){
        //     int cnt = 1;
        //     for(int j=i+1;j<n;j++){
        //         if(nums[j]==nums[i]){
        //             cnt++;
        //         }
        //     }
        //     if(cnt > n/2) return nums[i]; 
        // }
        // return 0;
        int element = INT_MIN;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(cnt == 0){
                element = nums[i];
                cnt = 1;
            }
            else if(nums[i]==element) cnt++;
            else cnt--;
        }
        int count = 0;
        for(int i=1;i<n;i++){
            if(nums[i]==element) cnt++;
        }
        if(cnt>n/2) return element;
        return -1;
    }
};