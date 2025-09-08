class Solution {
public:
   

    
   const long long mod = 1e9+7;

    long long pow(long long num,long long n){
        if (n==0){return 1;}

        long long half = pow(num,n/2);
        long long res = (half * half)%mod;

        if (n%2==1){
            res = (res*num)%mod;
        }
        
        return res;
    }
    
    int countGoodNumbers(long long n) {
        long long odd,even;
        odd=(n)/2;
        even=(n+1)/2;
        long long p1 = pow(4,odd);
        long long p2 = pow(5,even);
        return (int)(p1%mod)*(p2%mod)%mod;
    }
};