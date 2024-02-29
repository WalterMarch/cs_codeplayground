def bucket_sort(arr):
    # Find the minimum and maximum values in the input array
    min_val, max_val = min(arr), max(arr)

    # Determine the range of each bucket
    bucket_range = (max_val - min_val) / len(arr)

    # Create empty buckets
    num_buckets = len(arr)
    buckets = [[] for _ in range(num_buckets)]

    # Place each element in the appropriate bucket
    for num in arr:
        index = int((num - min_val) / bucket_range)
        if index == num_buckets:
            index -= 1  # Adjust for values equal to max_val
        buckets[index].append(num)

    # Sort each bucket and concatenate them to get the sorted array
    sorted_arr = []
    for bucket in buckets:
        sorted_arr.extend(sorted(bucket))

    return sorted_arr

# Example usage:
arr = [3.2, 0.4, 2.8, 4.5, 1.1, 0.9]
sorted_arr = bucket_sort(arr)
print(sorted_arr)