/*
    Notes
    - Order the list to make it easier to detect duplicates without a hash map
    - work in from the biggest and smallest variable index1 and index3
    - use index2 to test all numbs inbetween index 1 and 3
    
    https://www.code-recipe.com/post/three-sum

*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sum = 0;
        int index1 = 0, index2 = 0, index3 = 0;
        vector<vector<int>> rtn;
        
        sort(nums.begin(),nums.end());
                
        for(index1 = 0; index1 < nums.size()-2; index1++){
            
            //check duplacates from the left
            if(index1>0 && nums[index1] == nums[index1-1]){
                printf("duplicate\n");
                continue;
            }
            
            index2 = index1 + 1;
            index3 = nums.size()-1;
            
            while(index2 < index3){
                sum = nums[index1] + nums[index2] + nums[index3];
                
                //save triplet if sum is 0
                if(sum == 0){
                    rtn.push_back(vector<int>{nums[index1], nums[index2], nums[index3]});
                    
                    //Move in largest index since any pair that uses it and index1 
                    //will be a duplicate triplet
                    index3--;

                    //skip duplicates form the right
                    while(index2 < index3 && nums[index3]==nums[index3+1]){
                        printf("duplicate decreasing index3\n");
                        index3--;
                    }
                }
                
                //decrease largest numb if sum is greater than 0
                else if(sum>0){
                    printf("decreasing index3\n");
                    index3--;
                }
                
                //increment index2 to be larger
                else{
                    printf("increasing index2\n");
                    index2++;
                }
            }
        }
        return rtn;
    }
};