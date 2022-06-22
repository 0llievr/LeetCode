class Solution {
private:
    int count;
    int offbyone;
public:
    int climbStairs(int n) {
        //fibonachi implmentation
        
        if(n<=2) return n;
        
        int prev = 2;
        int prev2 = 1;
        int next = 0;
        
        //each next step i has (i-1)+(i-2)
        //unique ways to climb to the top
        for(int i = 3; i <= n; i++){
            next = prev + prev2;
            prev2 = prev;
            prev = next; 
        }
        
        return next;
        
    }
};


/*
class Solution {
private:
    int count;
public:
    void recurse(int togo){
        //if it goes over return      
        if(togo < 0){
            return;   
        }
        
        //count when top stair is reached
        if(togo == 0){
            count++;
            return;
        }
        
        //recursivly take steps so it tests
        //every possible combo of 1 and 2 steps
        
        recurse(togo-1);
        
        recurse(togo-2);
        
    }
    
    int climbStairs(int n) {
        //recursive implementation
        recurse(n);
        return count;
    }
};
*/