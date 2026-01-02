class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map <int,int> mp; int x;
        for (int i=0; i<nums.size();i++){
            mp[nums[i]]++;
            if (mp[nums[i]]==(nums.size()/2)){x=nums[i];break;}
        }
        return x;
    }
};