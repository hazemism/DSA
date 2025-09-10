class Solution {
public:


    int rec (int n){
        if (n==0){return 0;}
        if (n==1){return 1;}

        return rec(n-1)+rec(n-2);
    }
    int fib(int n) {
        return rec(n);
    }
};