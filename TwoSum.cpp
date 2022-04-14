/* 
Notes
    - Hashmap has structure [compment, position in nums]
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mymap; //hashmap used for the O(n) lookup time.
        int tofind = 0;
        vector<int> rtn;
        
        for(int i = 0; i < nums.size(); i++){
            //generate numb[i]'s complement
            tofind = target - nums[i];
                
            //Check to see if the complemnt has been added to hashmap already
            //If complment is added already, pair has been found and return
            //else save position in complements position in map
            if(mymap.find(tofind)!= mymap.end()){
                rtn.push_back(mymap[tofind]);
                rtn.push_back(i);
                return rtn;
            }else{
                mymap[nums[i]] = i;
            }   
        }
        return rtn; //should not get here
    }
};