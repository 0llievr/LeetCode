class Solution {
    
    var rtn : [[Int]] = [[1]]
    
    
    func generate(_ numRows: Int) -> [[Int]] {
        
        var curRowLength = 1
        
        if numRows == 1{
            return rtn
        }
        else{
            rtn.append([1,1])
            
            if(numRows == 2){
                return rtn
            }
        }
                
        //for however levels needed to go down
        for i in 1...numRows-2{                  
            
            curRowLength += 1
            
            var curRow : [Int] = []
                  
            //add inners
            for j in 1...(curRowLength-1){
                curRow.append(rtn[i][j] + rtn[i][j-1])
            }
            
            //insert 1s at the front and back
            curRow.insert(1, at:0)
            curRow.append(1)
            print(curRow)
            
            //append curr row to rtn 
            rtn.append(curRow)
            
        }
        

        return rtn
    }
}