class Solution {
public:
    int totalMoney(int n) {
       int sum=0; int y=0;
       for (int i=0; n>0; i++){
           if(n>=7){ n-=7;
             int x=7+i;
             y+=i;
             sum+=((x*(x+1))/2)-y;
           }

           else { 
              int x=n+i; n=0;
              y+=i;
              sum+=((x*(x+1))/2)-y;
           }
       }
        
    return sum;
    }
};