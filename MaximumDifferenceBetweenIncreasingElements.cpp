class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = INT_MAX;
        int max = 0;
        
        //walk l->r keeping track of the mininum value found and
        //test its diffrence with current value, keep track of
        //the maximum value found, return -1 if no max found
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min)
                min = nums[i];
            
            if(nums[i]-min>max)
                max = nums[i]-min;
        }
        
        return (max==0) ? -1 : max;
        
    }
};