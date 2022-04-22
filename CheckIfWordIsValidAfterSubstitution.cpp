//1003
class Solution {
public:    
    bool isValid(string s) {
        for (auto i = s.find("abc"); i != string::npos; i = s.find("abc")){
            s.erase(i, 3);
        }
        return s.empty();
    }
};

/* 
//Re-inventing the wheel
    vector<char> c;
    for(int i = 0; i< s.length(); i++){
        c.push_back(s[i]);
    }
    
    //if its not a multiple of three its false
    if(s.length() % 3 != 0){
        return false;
    }
    
    //Find how many abcs are in there
    for(int i = 0; i < s.length()/3; i++){
        for(int j=0; j<c.size()-3; j++){
            if(c[j]=='a' && c[j+1]=='b' && c[j+2]=='c'){\
                c.erase(c.begin()+j, c.begin()+j+3 );
            }
        }
    }
    
    if(c[0]=='a' && c[1]=='b' && c[2]=='c'){ return true;}
    else{return false;}
*/