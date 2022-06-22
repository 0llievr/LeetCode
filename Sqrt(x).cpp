class Solution {
public:
    int mySqrt(int x) {
        int l=0;
        int r=x;
        int mid=0;
        int rtn;
        
        if(x==0){return 0;}
        if(x==1){return 1;}
        
        //Work outside in 
        while(l<=r){
            
            mid = (l+r)/2;
            printf("Mid:%d\n", mid);
            
            //if mid is greater than remainder of x/mid
            //then answer is smaller than mid
            if(mid > x/mid){
                r = mid-1;
                printf("R:%d Rtn:%d\n", r, rtn);
            }
            
            //if mid is less than x/mid then 
            // answer is bigger than mid.
            else{
                l = mid+1;
                //save the last found mid that is not greater than x/mid
                rtn = mid;
                printf("L:%d Rtn:%d\n", l, rtn);
            }    
        }
        
        return rtn;
    }
};