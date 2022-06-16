class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int largest = INT_MIN;
        int current = 0;
        
        for(int i = 0; i<size; i++){
            current += nums[i];
            
            largest = max(largest, current);
            
            if(current < 0){
                current = 0;
            }
        }
        
        return largest;
    }
};


/*
  //Original idea      
for(int i = 0; i<size; i++ ){
    for(int j = i; j<size; j++){
                                
        current += nums[j];
                
        if(current > largest){
            largest = current;
        }
    }
        current = 0;
}
        
*/
