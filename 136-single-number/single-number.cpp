class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int num;
        for (auto [i,j] : mp){
            if (j==1){num=i;}
        }
        return num;
    }


};