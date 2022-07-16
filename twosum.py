class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        tmp = 0
        
        for i in range(len(nums)):
            tmp = target - nums[i]
                        
            if tmp in nums:
                if i != nums.index(tmp):
                    return[i,nums.index(tmp)]