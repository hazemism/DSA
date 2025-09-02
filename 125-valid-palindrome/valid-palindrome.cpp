class Solution {
public:
    bool isPalindrome(string s) {
        string filtr;
        for (char c : s){
            if (isalnum(c)){
                filtr.push_back(tolower(c));
            }
        }
        
        int r=filtr.size()-1; int l=0;
        while (l<r){
            if (filtr[l]!=filtr[r]){return false;}
            l++;
            r--;
        }
        return true;
    }
};