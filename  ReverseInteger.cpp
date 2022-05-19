class Solution {
public:
    int reverse(int x) {
        bool negative = false;
        int rtn = 0;
        
        if(x <= INT_MIN){ //underflow protection
            return false;
        }
        
        if(x<0){
            negative = true;
            x *= -1;
        }
        
        
        while(x>0){
            if(INT_MAX/10 < rtn){ //overflow protection
                return 0;
            }
            rtn = rtn*10 + x%10;
            x/=10;
        }

        if(negative){
            return -rtn;
        }else{
            return rtn;
        }
        
        
    }
};