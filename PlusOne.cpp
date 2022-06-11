class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int size = digits.size()-1;
        int pos = size;
        cout << size+1 << endl;
        
        
        if(digits[size] != 9){//if under nine add 1 and return
            digits[size]+=1;
        }else{
            carry+=1;
            while(carry != 0){
                cout << "pos: " << pos << endl;
                if(pos == -1){
                    digits.push_back(0);
                    for(int x : digits){
                        x = 0;
                    }
                    digits[0] = 1;
                    return digits;
                }
                
                if(digits[pos] == 9){
                    digits[pos] = 0;
                    pos--;
                }else{
                    digits[pos]++;
                    return digits;
                }
                
            }
        
        }
        return digits;

    }
};