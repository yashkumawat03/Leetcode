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
        int candidate = 0;
        int count = 0;

        for(int num : nums){
            if(count == 0){
                candidate = num;
            }

            if(num == candidate)
                count++;
            else
                count--;
        }

        return candidate;
        
            
        
    }
};