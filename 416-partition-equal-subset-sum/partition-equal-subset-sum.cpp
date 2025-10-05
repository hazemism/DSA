class Solution {
public:
    
    int siz; vector <int> v;
    vector <vector<int>> dp;

    int rec (int idx,int sum){
        if (sum==0){return true;}
        if (idx==siz){return false;}
        if (dp[idx][sum]!=-1){
            return dp[idx][sum];
        }
        
        if (sum>=v[idx]){
            if (rec (idx+1,sum-v[idx])){return true;}
        }
       
        

        return dp[idx][sum]=rec (idx+1,sum);
    }
   

    bool canPartition(vector<int>& nums) {
         v=nums;
         int sum = 0;
         siz = nums.size();
         for (int i=0; i<siz; i++){
             sum+=nums[i];
         }

         if (sum%2!=0){return false;}
         dp = vector<vector<int>>(siz, vector<int>(sum/2 + 1, -1));
         return rec (0,sum/2);
    }
};