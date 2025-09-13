class Solution {
public:
    int maxFreqSum(string s) {
        int max1=0; int max2=0;
        map <char,int> mp;
        for (int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for (auto [i,n] : mp){
            if (i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
                max1=max(max1,n);
            }
            else{max2=max(max2,n);}
        }

        return max2+max1;
    }
};