def split_array(nums, K):
    if not nums:
        return 0
    if K >= len(nums):
        return max(nums)

    def canSplit(max_sum):
        current_sum = 0
        splits = 1
        for num in nums:
            if current_sum + num > max_sum:
                splits += 1
                current_sum = num
                if splits > K:
                    return False
            else:
                current_sum += num
        return True

    low = max(nums)
    high = sum(nums)
    result = high

    while low <= high:
        mid = (low + high) // 2
        if canSplit(mid):
            result = mid
            high = mid - 1
        else:
            low = mid + 1

    return result