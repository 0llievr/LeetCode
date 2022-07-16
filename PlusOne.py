class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        pos = len(digits) -1
        run = True
        
        
        while run:
            if digits[pos] == 9:
                digits[pos] = 0
                pos-=1
            else:
                digits[pos] +=1
                run = False
                
            if pos == -1:
                digits.insert(0,1)
                run = False
                
        return digits