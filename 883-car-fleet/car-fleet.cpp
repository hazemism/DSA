class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int ans=0;
        int n = position.size();
        map <int,double> mp; 

        for  (int i=0; i<n; i++){
             double num =double(target-position[i])/double(speed[i]);
             mp[position[i]]=num;
        }

        double cur=0.0;
          for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            double t = it->second;
            if (t > cur) { 
                ans++;
                cur = t;
            }
        }

        return ans;
    }
};