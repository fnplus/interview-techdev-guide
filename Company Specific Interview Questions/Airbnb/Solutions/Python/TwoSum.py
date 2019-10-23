def twoSum(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    index_map = {}
    for i in range(len(nums)):
        num = nums[i]
        pair = target - num
        if pair in index_map:
            return [index_map[pair], i]
        index_map[num] = i
    return None
 
nums = [1,4,8,3,2,9,15]
target = 13
print("Nums: ", nums)
print("Target: ", target)
print("Solution: ", twoSum(nums, target))
 
print()
nums = [2,7,11,15]
target = 9
print("Nums: ", nums)
print("Target: ", target)
print("Solution: ", twoSum(nums, target))
