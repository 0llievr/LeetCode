class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 1){return 1;}

        for(int i = 0; i < nums.size()-2;){
            
            if(nums[i] == nums[i+2]){
                
                nums.erase(nums.begin()+(i+2));          
                
            }else{
                
                i++;
                
            }
        }
        
        return nums.size();
    }
};