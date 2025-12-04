class Solution {
public:
   vector <int> v;
   void rec (string x,vector<int>& digits,vector<bool>& vis ){
       if (x.size()==3&&stoi(x)%2==0){v.push_back(stoi(x));return;}

       for (int i=0; i<digits.size();i++){
           if (vis[i]) continue; 
           if (x.size() == 0 && digits[i] == 0) continue;
           if (x.size() == 2 && digits[i] % 2 != 0) continue;
           vis[i]=true;
           rec (x+to_string(digits[i]),digits,vis);
           vis[i]=false;
       }
   }

    vector<int> findEvenNumbers(vector<int>& digits){
        vector<bool> vis(digits.size(), false);
        rec("",digits,vis);
         sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        return v;
    }
};