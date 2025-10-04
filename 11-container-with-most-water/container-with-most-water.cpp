class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0; int r=height.size()-1;
        int ans=0; 

        while (l<r){
              if (height[r]>height[l]){
                  ans=max(ans,height[l]*(r-l));
                  l++; continue;
              } 
              ans=max(ans,height[r]*(r-l));
              r--;
        }

        return ans;
    }
};