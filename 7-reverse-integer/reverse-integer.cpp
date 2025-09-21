class Solution {
public:
    int reverse(int x) {
       bool neg = x < 0;
     string s = to_string(std::abs((long long)x)); 


       std::reverse(s.begin(), s.end());

    
       long long num=stoll(s);
       if (neg){num = -num;}
       
       if (num > INT_MAX || num < INT_MIN) return 0;

       return (int)num;
       
    }
};