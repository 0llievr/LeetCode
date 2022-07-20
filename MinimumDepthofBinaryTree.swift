/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public var val: Int
 *     public var left: TreeNode?
 *     public var right: TreeNode?
 *     public init() { self.val = 0; self.left = nil; self.right = nil; }
 *     public init(_ val: Int) { self.val = val; self.left = nil; self.right = nil; }
 *     public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
 *         self.val = val
 *         self.left = left
 *         self.right = right
 *     }
 * }
 */
class Solution {
    var minDebth : Int = 99999999
    
    func recurse(_ node: TreeNode, _ debth : Int){
        var curDebth = debth + 1
        var leftchild = false
        var rightchild = false
        
        //recurse left
        if let l = node.left{
            leftchild = true
            recurse(l,curDebth)
        }
        
        
        //recurse right
        if let r = node.right{
            rightchild = true
            recurse(r,curDebth)
        }
        
        //check if its a leaf
        if !leftchild && !rightchild{
            //if its a leaf and has a shorter debth update min
            if curDebth < minDebth{
                minDebth = curDebth
            }  
        }

    }
    
    func minDepth(_ root: TreeNode?) -> Int {
        if let n = root{
            recurse(n, 0)
        }
        else{
            return 0
        }
        
        return minDebth
    }
}