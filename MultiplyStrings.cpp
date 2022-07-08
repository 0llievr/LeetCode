class Solution {
public:
    int ctoi(char c){return c - '0';}
    int itoc(int i){return i + '0';}
    
    string multiply(string num1, string num2) {
        string product = "";
        int ctr = 0; //to simulate the 0 in doing it by hand
        int carry = 0;
        int didg = 0; //curr didget to add to string
        int tmp = 0;
        int pos = 1;
        
        //if either variable is 0 return 0
        if(ctoi(num1[0]) == 0 || ctoi(num2[0])==0){return "0";}
                
        //work right to left like you would by hand
        for(int i = num1.size()-1; i >= 0; i--){
            for(int j = num2.size()-1; j >= 0; j-- ){
                
                //calculate didget to save and didget to carry
                tmp = (ctoi(num1[i]) * ctoi(num2[j])) + carry;
                didg = tmp % 10;
                carry = tmp / 10;
                
                //if (postion to save already has a variable) add didg and the variable together
                //adding the carry to the existing carry
                //else append didget to the end of product string
                if(product.size() >= pos+ctr ){
                    tmp = ctoi(product[(pos+ctr-1)]) + didg;
                    product[(pos+ctr-1)] = itoc(tmp % 10);
                    carry += tmp / 10;                     
                }else{
                    product += itoc(didg);
                }
                pos++; //advance position to save with each 
            }
            //reset save position and increment zero ctr
            pos = 1;
            ctr++;

            //if there is still a carry by the end of the aritmatic
            if(carry != 0){
                product += itoc(carry);
                carry = 0;
            }
        }
        
        //reverse product
        int len = product.length();
        int n=len-1;
        for(int i=0;i<(len/2);i++){
            swap(product[i],product[n]);
            n = n-1;
        }
    
        return product;
        
    }
};


//Better solution found on the internet
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        vector<int> res(num1.size()+num2.size(), 0);
        
        for (int i = num1.size()-1; i >= 0; i--) {
            for (int j = num2.size()-1; j >= 0; j--) {
                res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        
        int i = 0;
        string ans = "";
        while (res[i] == 0) i++;
        while (i < res.size()) ans += to_string(res[i++]);
        
        return ans;
    }
};