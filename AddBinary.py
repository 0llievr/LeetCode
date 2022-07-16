class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        carry = 0
        rtn = ""
        cur = 0
        
        #make the strings the same length by appending 0 
        # to the front of the smaller string
        if len(a) > len(b):
            b = ("0"*(len(a)-len(b))) + b
        else:
            a = ("0"*(len(b)-len(a))) + a
            
        pos = len(a)-1
        
        #loop though the strings back to front
        while pos >= 0:
            cur = int(a[pos]) + int(b[pos]) + carry
            # will either be 0 1 2 3
            
            if cur == 0:
                rtn = "0" + rtn
                
            if cur == 1:
                rtn = "1" + rtn
                carry = 0
                
            if cur == 2:
                rtn = "0" + rtn
                carry = 1
            
            if cur == 3:
                rtn = "1" + rtn
                carry = 1
            
            pos-=1
            
        #If there is still a carry append it to the front
        if carry:
            rtn = "1" + rtn
            
        return rtn
                
        