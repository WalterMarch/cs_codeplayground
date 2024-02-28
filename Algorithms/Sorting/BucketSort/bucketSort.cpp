#include <iostream>
#include <vector>
#include <algorithm>

std::vector<double> bucketSort(std::vector<double> arr) {
    // Find the minimum and maximum values in the input vector
    double minVal = *min_element(arr.begin(), arr.end());
    double maxVal = *max_element(arr.begin(), arr.end());

    // Create empty buckets
    int numBuckets = arr.size();
    double bucketRange = (maxVal - minVal) / numBuckets;
    std::vector<std::vector<double>> buckets(numBuckets);

    // Place each element in the appropriate bucket
    for (double num : arr) {
        int index = static_cast<int>((num - minVal) / bucketRange);
        if (index == numBuckets) {
            index--;  // Adjust for values equal to maxVal
        }
        buckets[index].push_back(num);
    }

    // Sort each bucket and concatenate them to get the sorted vector
    std::vector<double> sortedArr;
    for (auto& bucket : buckets) {
        std::sort(bucket.begin(), bucket.end());
        sortedArr.insert(sortedArr.end(), bucket.begin(), bucket.end());
    }

    return sortedArr;
}

int main() {
    std::vector<double> arr = {3.2, 0.4, 2.8, 4.5, 1.1, 0.9};
    std::vector<double> sortedArr = bucketSort(arr);

    for (double num : sortedArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
