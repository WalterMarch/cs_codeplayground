package main

import (
	"fmt"
	"sort"
)

func bucketSort(arr []float64) []float64 {
	if len(arr) == 0 {
		return arr
	}

	// Find the minimum and maximum values in the array
	minVal, maxVal := arr[0], arr[0]
	for _, num := range arr {
		if num < minVal {
			minVal = num
		}
		if num > maxVal {
			maxVal = num
		}
	}

	// Determine the range and the number of buckets
	rangeVal := maxVal - minVal
	numBuckets := len(arr)
	bucketSize := rangeVal / float64(numBuckets)

	// Create an array of empty buckets
	buckets := make([][]float64, numBuckets)
	for i := range buckets {
		buckets[i] = make([]float64, 0)
	}

	// Place each element in the appropriate bucket
	for _, num := range arr {
		index := int((num - minVal) / bucketSize)

		// Ensure that the index remains within a valid range
		if index == numBuckets {
			index--
		}
		buckets[index] = append(buckets[index], num)
	}

	// Sort each bucket and concatenate them to get the sorted array
	sortedArr := make([]float64, 0, len(arr))
	for _, bucket := range buckets {
		sort.Float64s(bucket)
		sortedArr = append(sortedArr, bucket...)
	}

	return sortedArr
}

func main() {
	arr := []float64{3.2, 0.4, 2.8, 4.5, 1.1, 0.9}
	sortedArr := bucketSort(arr)
	fmt.Println(sortedArr)
}
