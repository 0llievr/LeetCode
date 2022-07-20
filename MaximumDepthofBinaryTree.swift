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
    var debth : Int = 0
    
    func recurse(_ node : TreeNode, _ Debth : Int){
        var curDebth = Debth+1
        
        if(curDebth > debth){
            debth = curDebth
        }
        
        if let l = node.left{
            recurse(l, curDebth)
        }
        
        if let r = node.right{
            recurse(r, curDebth)
        }
    }
    
    
    func maxDepth(_ root: TreeNode?) -> Int {
        if let n = root{
            recurse(n,0)
        }
        return debth   
    }
}

/* some other dudes entire answer
    func maxDepth(_ root: TreeNode?) -> Int {
        root == nil ? 0 : max(maxDepth(root?.left), maxDepth(root?.right)) + 1
    }
*/