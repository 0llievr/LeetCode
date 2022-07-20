class Solution {
    func containsDuplicate(_ nums: [Int]) -> Bool {
        var myDict : [Int:Bool] = [:]
        
        for i in nums{
            if myDict[i] == true{return true}
            else{myDict[i] = true}
        }
        return false
    }
}