class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        compliment_map = {}
        for i in range(0, len(nums)):
            diff = target - nums[i]
            if (diff in compliment_map): return [compliment_map[diff], i]
            compliment_map[nums[i]] = i
        return []