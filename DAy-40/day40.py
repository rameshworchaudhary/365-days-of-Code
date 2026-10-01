def subarray_sum(nums, k):
    prefix_sum = {0: 1}

    current_sum = 0
    count = 0

    for num in nums:
        current_sum += num

        # Check if a previous prefix sum exists
        if current_sum - k in prefix_sum:
            count += prefix_sum[current_sum - k]

        # Store the current prefix sum
        prefix_sum[current_sum] = prefix_sum.get(current_sum, 0) + 1

    return count


def main():
    nums = [1, 2, 3]
    k = 3

    result = subarray_sum(nums, k)

    print(f"Number of subarrays with sum {k}: {result}")


if __name__ == "__main__":
    main()