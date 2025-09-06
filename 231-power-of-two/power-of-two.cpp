class Solution {
public:
    int rec (int n){
        if (n==1){return 1;}
        else if (n!=0&&n%2==0){
                 n/=2;
                 return rec(n);
        }
        else {return 0;}
        }

    bool isPowerOfTwo(int n) {
         return rec(n);
    }
};