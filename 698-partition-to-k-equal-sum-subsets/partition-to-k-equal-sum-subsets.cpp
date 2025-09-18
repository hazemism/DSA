class Solution {
public:

    int bas;
    vector <int> v; int t; int target;
    vector <bool> v2; 

    long long  sum (vector <int> v, long long num){
        for (int i=0; i<v.size(); i++){
            num+=v[i];
        }

        return num;
    }

    bool rec (int idx, int cur, int grp){
         if (grp==t-1){return true;}
         if (cur==target){return rec (0,0,grp+1);}
         if (cur>target){return false;}
        
         for (int j=idx; j<v.size(); j++){
            if (v2[j]) continue;
            v2[j]=true;
             if (rec (j+1,cur+v[j],grp)) return true;
            v2[j]=false;
            if (cur == 0) break;
         }

         return false;
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
         long long cs = sum(nums,0);
         if (cs%k!=0){return false;}
         v = nums; v2.resize(nums.size(),false);
         sort(v.rbegin(), v.rend());
         t=k; target=cs/k;
         return rec (0,0,0);
    }
};