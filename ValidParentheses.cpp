class Solution {
public:
    bool isValid(string s) {
        if(s.length() < 2)
            return false;
        
        vector<char> brackets;
        
        for(int i = 0; i < s.length(); i++){
            switch (s[i]){
                case '(':
                    brackets.push_back(s[i]);
                    break;
                case '{':
                    brackets.push_back(s[i]);
                    break;
                case '[':
                    brackets.push_back(s[i]);
                    break;
                case ')':
                    if(brackets.empty() || brackets.back() != '(')
                        return false;
                    brackets.pop_back();
                    break;
                case '}':
                    if(brackets.empty() || brackets.back() != '{')
                        return false;
                        brackets.pop_back();
                    break;
                case ']':
                    if(brackets.empty() || brackets.back() != '[')
                        return false;
                    brackets.pop_back();
                    break;
            }
        }
        
        if(brackets.empty())
            return true;
        else
            return false;
    }
};