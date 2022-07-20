class Solution {
    func fizzBuzz(_ n: Int) -> [String] {
        
        var rtn : [String] = []
        var myString : String = ""

        for i in 1...n{
            
            if(i % 3 == 0){
                myString += "Fizz"
            }
            if(i % 5 == 0){
                myString += "Buzz"
            }
            if(myString == ""){
                myString += String(i)
            }

            rtn.append(myString)
            
        }
        return rtn
    }
}