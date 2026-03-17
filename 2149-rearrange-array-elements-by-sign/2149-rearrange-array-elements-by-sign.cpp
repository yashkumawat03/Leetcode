class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //int n = nums.size();
        // for(int i=0;i<n;i++){
        //     //int ele = 0;
        //     if(i%2==0){
        //         if(nums[i]<0){
        //             int ele = nums[i];
        //             //int j=i+1;
        //             for(int j=i+1;j<n;j++){
        //                 if(nums[j]>0){
        //                     nums[i]=nums[j];
        //                     nums[j]=ele;
        //                     break;
        //                 }
        //             }
                        
        //         }
        //     }
             
        //     else if(i%2 != 0){
        //         if(nums[i]>0){
        //            int ele = nums[i];
        //             for(int j=i+1;j<n;j++){
        //                 if(nums[j]<0){
        //                     nums[i]=nums[j];
        //                     nums[j]=ele;
        //                     break;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return nums;
        int n = nums.size();
        vector<int> ans(n);

        int posIndex = 0; // even indices
        int negIndex = 1; // odd indices

        for(int x : nums){
            if(x > 0){
                ans[posIndex] = x;
                posIndex += 2;
            } else {
                ans[negIndex] = x;
                negIndex += 2;
            }
        }

        return ans;
    }
};