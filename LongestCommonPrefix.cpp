class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string rtn = "";
        bool run = true;
        char curmatch;
        int ctr = 0;
        
        if(strs.size()==0)
            return "";
                
        curmatch = strs[0][ctr];
        cout << curmatch << endl;
        
        while(run){
            if(ctr >= strs[0].length())
                return rtn;
            
            for(int i = 0; i < strs.size(); i++){
                if(strs[i][ctr] != curmatch){
                    return rtn;
                }
            }
            
            rtn += curmatch;
            ctr++;
            curmatch = strs[0][ctr];
        }
        
        return rtn;
    }
};