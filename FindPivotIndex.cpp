class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftTotal = 0;
        int rightTotal = 0;
        int rtn = 0;
        
        
        //add everything to right total
        for(int x : nums){
            rightTotal+=x;
        }
                
        //work l->r subtracting i from rightTotal and adding i-1 to left total
        for(int i = 0; i< nums.size(); i++){
                        
            rightTotal -= nums[i];
            
            if(leftTotal == rightTotal)
                return i;
            
            leftTotal += nums[i];
            
        }
        return -1;  
    }
};


/*
    int pivotIndex(vector<int>& nums) {
        int leftTotal = 0;
        int rightTotal = 0;
        int rtn = 0;
        
        
        //add everything to right total
        for(int x : nums){
            rightTotal+=x;
        }

        
        if(leftTotal == rightTotal){
            return 0;
        }
        
        cout << rightTotal << endl;
        
        rightTotal-=(nums[0]);
        
        //work l->r subtracting i from rightTotal and adding i-1 to left total
        for(int i = 1; i< nums.size()-1; i++){
                        
            leftTotal += nums[i-1];
            rightTotal -= nums[i];
            
            printf("%d %d %d\n", leftTotal, nums[i] , rightTotal);

            if(leftTotal == rightTotal)
                return i;
        }
        
        return -1;
        
    }
*/