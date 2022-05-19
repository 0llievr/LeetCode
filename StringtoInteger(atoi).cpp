class Solution {
public:
    int myAtoi(string s) {
        int ptr = 0;
        int rtn = 0;
        int tmp = 0;
        bool negative = false;
        
        //get rid of white space
        while(ptr < s.length() && s[ptr] == ' '){
            ptr++; 
        }
            
        if(s[ptr] == '-'){
            negative = true;
            ptr++;
        }
        
       
              
        while(ptr < s.length() && isdigit(s[ptr])){
            tmp = s[ptr] - '0';
            cout << rtn << endl;
            try{rtn = (10*rtn) + tmp;}
            catch(...){return negative ? INT_MIN : INT_MAX;}
            ptr++;
        }
              
        return negative ? -rtn : rtn;
        
        
        
        
        
    }
};