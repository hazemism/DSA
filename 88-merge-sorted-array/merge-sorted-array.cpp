class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int r=0; int l=0; 
        while (r < m && l < n){
              if (nums1[r]>nums2[l]&&r<m&&l<n){
                 int temp=nums1[r];
                 nums1[r]=nums2[l];
                 nums2[l]=temp;
               }
               sort(nums2.begin(),nums2.end());
              r++;
        }

        while (l<n){
             if(m<nums1.size()){
                nums1[m]=nums2[l];
             }
             else {nums1.push_back(nums2[l]);}
             l++; m++;
        }

    }
};