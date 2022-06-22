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