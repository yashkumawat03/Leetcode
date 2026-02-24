class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        //Brute force approach
        // int n=nums.size();
        // vector<int> temp;
        // for(int i = 0;i<n;i++){       
        //     if(nums[i]!=0){
        //         temp.push_back(nums[i]);
        //     }
        // }
        // int j = temp.size();
        // for(int i=0;i<j;i++){
        //     nums[i]=temp[i];
        // }
        // for(int i = j;i<n;i++){
        //     nums[i]=0;
        // }
        
        int n=nums.size();
        int j = -1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }
    }
};