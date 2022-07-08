class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        int c = 1;
        
        //if asking for fib at f(0) Or F(1) it is just 0 or 1
        if(n < 2){ return n; }
        
        //alternate saving between a and b to keep track of prev numb
        for(int i=2; i<=n; i++){
            
            c = a + b;
            
            if(i%2 == 0){
                a = c;
            }else{
                b = c;
            }
        }
        return c;
    }
};