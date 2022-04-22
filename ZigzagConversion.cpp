class Solution {
public:
    string convert(string s, int numRows) {
        string rtn;
        vector<string> tmp(numRows);
        int i=0, size=s.size();
        
        while(i<size){
            //Down-zig: add to row and move down row
            for(int j=0; j<numRows && i<size; j++, i++){
                tmp[j] += s[i];   
            }
            
            //Up-Zag: add to row and move up (ignore top and bottom row)
            for(int j=numRows-2; j>0 && i<size; j--, i++){
                tmp[j] += s[i];
            }           
        }
        
        //combine strings
        for(string x : tmp){
            rtn += x;
        }
        
        return rtn;
    }
};