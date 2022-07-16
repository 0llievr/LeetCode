class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        
        
        ctr = len(num)-1
        carry = 0
        
        #while there are still things in the array move right to left
        while ctr >= 0:
            
            #get the 1's place of k add it to carry and array[ctr]
            num[ctr] += ( (k%10) + carry) 
            
            #remove the ones place k
            k = int(k/10)
            
            #get carry value of previous addition
            carry = int(num[ctr]/10) 
            
            #save only the ones place of prev addtion
            num[ctr] = num[ctr]%10
            
            #dincrement array counter
            ctr -= 1
        
        #while there are still things in the number
        while k > 0:
            #get 1's place of var and carry
            x = (k%10) + carry 
            
            #remove ones place of var
            k = int(k/10)
            
            #calculate carry of prev addition
            carry = int(x/10)
            
            #save only ones place of prev addition
            x = x%10
            
            #insert at front of array
            num.insert(0,x)
            
        #if there is still a remainder add to front
        if carry != 0:
            num.insert(0,carry)
            
            
        return num
 