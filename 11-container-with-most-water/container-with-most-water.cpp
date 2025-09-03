class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int l=0; int r= height.size()-1;
        while (l<r){
              int v = r-l;
              if (height[l]<=height[r]){
                 ans = max(ans,v*height[l]);
                 l++;
              }

              else {
                 ans = max(ans,v*height[r]);
                 r--;
              }
        }

        return ans;
    }
};