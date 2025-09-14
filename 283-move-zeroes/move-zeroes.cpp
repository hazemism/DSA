class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0; int r=1;
        while (r<nums.size()){
              if (nums[l]==0){
                 while (nums[r]==0&&r<nums.size()-1){r++;}
                 nums[l]=nums[r];
                 nums[r]=0;
              }
              l++;r++;
        }
    }
};