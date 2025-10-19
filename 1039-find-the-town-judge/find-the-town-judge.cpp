class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.empty()&&n==1){return 1;}
        map <int,int> tr;
        map <int,int> td;

        for (auto i : trust){
            tr[i[0]]++;
            td[i[1]]++;
        }

        for (auto [i,j] : td){
            if (j==n-1&&tr[i]==0){return i;}
        }
        return -1;
    }
};