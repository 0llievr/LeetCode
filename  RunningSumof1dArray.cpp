class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningsum;
        
        //push back starting sum
        runningsum.push_back(nums[0]);
            
        //start at pos 1 so i-1 access dosnt cause RTE
        for(int i = 1; i < nums.size(); i++){
            runningsum.push_back(nums[i] + runningsum[i-1]);
        }
        
        return runningsum;
        
    }
};


/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currentsum = 0;
        vector<int> sums;
        
        for(int x : nums){
            currentsum+=x;
            sums.push_back(currentsum);
        }
        
        return sums;
    }
};
*/
