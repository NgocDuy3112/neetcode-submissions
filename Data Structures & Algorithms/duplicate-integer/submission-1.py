class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        checked_nums = []
        for num in nums:
            if num in checked_nums:
                return True
            else: checked_nums.append(num)
        return False