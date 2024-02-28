import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class BucketSort {
    public static List<Double> bucketSort(List<Double> arr) {
        // Find the minimum and maximum values in the input list
        double minVal = Collections.min(arr);
        double maxVal = Collections.max(arr);

        // Determine the number of buckets based on the range of values
        int numBuckets = arr.size(); // Or choose an appropriate number of buckets
        List<List<Double> > buckets = new ArrayList<>(numBuckets);

        for (int i = 0; i < numBuckets; i++) {
            buckets.add(new ArrayList<>());
        }

        // Place each element in the appropriate bucket
        double bucketRange = (maxVal - minVal) / numBuckets;
        for (Double num : arr) {
            int index = (int) ((num - minVal) / bucketRange);
            if (index == numBuckets) {
                index--;  // Adjust for values equal to maxVal
            }
            buckets.get(index).add(num);
        }

        // Sort each bucket and concatenate them to get the sorted list
        List<Double> sortedArr = new ArrayList<>();
        for (List<Double> bucket : buckets) {
            Collections.sort(bucket);
            sortedArr.addAll(bucket);
        }

        return sortedArr;
    }

    public static void main(String[] args) {
        List<Double> arr = new ArrayList<>(List.of(3.2, 0.4, 2.8, 4.5, 1.1, 0.9));
        List<Double> sortedArr = bucketSort(arr);
        System.out.println(sortedArr);
    }
}