class Solution {
public:
    vector<string> rtn;

    void Helper(int open, int close, int n, string current){
        if(current.length() == n*2){//base case
            rtn.push_back(current);
            return;
        }
        
        if(open<n){
            //open++;
            //current += "(";
            Helper(open+1, close, n, current+"(");
        }
        
        if(close<open){
            //close++;
            //current += ")";
            Helper(open, close+1, n, current+")");
            //Doing arithmetic in function call does not update close in current iteration; Prevents doubles bug
        }
    }
    
    vector<string> generateParenthesis(int n) {
        Helper(0,0,n,"");
        return rtn;
    }
};