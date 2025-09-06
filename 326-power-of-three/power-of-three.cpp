class Solution {
public:
    bool rec (int n){
        if (n==1){return true;}
        else if (n<=0||n%3!=0){return false;}
        return rec(n/3);
    }
    
    bool isPowerOfThree(int n) {
         return rec(n);
    }
};