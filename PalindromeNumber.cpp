class Solution {
public:
    bool isPalindrome(int x) {
        string number = std::to_string(x);
        
        //Work in from both sides of word
        for(int i=0, j=number.size()-1; i<j; i++, j--){

            //if they dont match number is not a palandrome
            if(number[i]!=number[j]){
                return false;
            }
        }
        return true;
    }
};