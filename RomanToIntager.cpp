class Solution {
public:
    int romanToInt(string s) {
        int rtn = 0;
        int val = 0;
        
        //Build bottom up, step by step
        //value is added to return if its larger than rtn
        //value is subracted if less than return
        
        for(int i = s.length()-1; i >= 0; i--){
            switch(s[i]){
                case 'I': val = 1; break;
                case 'V': val = 5; break; 
                case 'X': val = 10; break; 
                case 'L': val = 50; break; 
                case 'C': val = 100; break; 
                case 'D': val = 500; break; 
                case 'M': val = 1000; break; 
            }
            
            //chars can come in multiples
            // no char array longer than 3 is possible in language
            //if((val*max multiple possible) > current){ answer add singular val}
            if(val*3 > rtn){
                rtn += val;
            }else{
                rtn -= val;
            }
        }
        
        return rtn;
        
    }
};