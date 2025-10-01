class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0; int can=0;
        while(numBottles>=1){
              ans+=numBottles; 
              can+=numBottles;   
              numBottles=can/numExchange;
              can = can%numExchange; 
        }
        return ans;
    }
};