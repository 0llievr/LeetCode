class Solution {
public:
    int strStr(string haystack, string needle) {
        int rtn = -1;
        int indx = 0;
        int nlength = needle.length();
        
        //if no needle return
        if(needle.length() == 0){
            return rtn;
        }
        
        //move left -> right in haystack
        for(int i = 0; i < haystack.length(); i++){
            printf("i:%d,%c , indx:%d,%c\n", i, haystack[i], indx, needle[indx]);
            
            //if needle car match move needle pointer forward
            if(haystack[i] == needle[indx]){
                indx++;
            
            //if needle mismatch reset index to 0 and i to start of match
            }else{
                i = i - indx;
                indx = 0;
            }
            
            //return if complete match
            if(indx == nlength){
                return (i-indx)+1;
            }
        }
        
        //if reached end of haystack
        return -1;
        
    }
};