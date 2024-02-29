function bucketSort(arr) {
    // Find the minimum and maximum values in the array
    let minVal = arr[0];
    let maxVal = arr[0];
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Determine the range and the number of buckets
    const range = maxVal - minVal;
    const numBuckets = arr.length;
    const bucketSize = range / numBuckets;

    // Create an array of empty buckets
    const buckets = [];
    for (let i = 0; i < numBuckets; i++) {
        buckets.push([]);
    }

    // Place each element in the appropriate bucket
    for (let i = 0; i < arr.length; i++) {
        let index = Math.floor((arr[i] - minVal) / bucketSize);

        // Ensure that the index is within the valid range of bucket indices
        if (index === numBuckets) {
            index = numBuckets - 1;
        }
        buckets[index].push(arr[i]);
    }

    // Sort each bucket and concatenate them to get the sorted array
    let sortedArr = [];
    for (let i = 0; i < numBuckets; i++) {
        sortBucket(buckets[i]);
        sortedArr = sortedArr.concat(buckets[i]);
    }

    return sortedArr;
}

function sortBucket(bucket) {
    // Use any sorting algorithm for the bucket, e.g., insertion sort
    for (let i = 1; i < bucket.length; i++) {
        const key = bucket[i];
        let j = i - 1;
        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}

// Example usage:
const array = [3.2, 0.4, 2.8, 4.5, 1.1, 0.9];
const sortedArray = bucketSort(array);
console.log(sortedArray);