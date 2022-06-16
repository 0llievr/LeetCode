class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int max = 0;
        int lowest = INT_MAX;
        
        //since you can only sell in the future and buy in the past you can
        //walk l->r keeping track of the lowest price and test it with 
        //each price of each day keeping track of the max price found
        for(int i = 0; i < size; i++){
            
            if(prices[i] < lowest){
                lowest = prices[i];
            }
            
            if(prices[i]-lowest > max){
                max = prices[i]-lowest;
            }
        }
        return max;
    }
};

/*
    int maxProfit(vector<int>& prices) {
        int size = prices.size()-1;
        int max = 0;
        
        //since you can only sell in the future and buy in the past you can
        //work l->r testing each price with each price in its future keeping
        //track of the maximum found
        for(int i = 0; i <= size; i++){
           for(int j = i+1; j <= size; j++){
               if(prices[j] - prices[i] > max){
                   max = prices[j] - prices[i];
               } 
           } 
        }  
        return max;
    }
*/

