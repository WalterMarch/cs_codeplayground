#include <stdio.h>
#include <stdlib.h>
// Define a structure for a linked list node
struct Node {
    double data;
    struct Node* next;
};
// Function to insert a value into a bucket (linked list)
void insert(struct Node** bucket, double value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    // Insert the new node at the beginning of the bucket
    if (*bucket == NULL) {
        *bucket = newNode;
    } else {
        newNode->next = *bucket;
        *bucket = newNode;
    }
}
// Function to sort a bucket (linked list)
void sortBucket(struct Node** bucket) {
    if (*bucket == NULL) return;  // Empty bucket
    // Perform an insertion sort on the bucket
    struct Node* sorted = NULL;
    struct Node* current = *bucket;
    while (current != NULL) {
        struct Node* next = current->next;
        // Insert current node into the sorted list
        if (sorted == NULL || current->data <= sorted->data) {
            current->next = sorted;
            sorted = current;
        } else {
            struct Node* search = sorted;
            while (search->next != NULL && search->next->data < current->data) {
                search = search->next;
            }
            current->next = search->next;
            search->next = current;
        }
        current = next;
    }
    *bucket = sorted;
}
// Function to perform bucket sort
void bucketSort(double arr[], int size) {
    // Find the minimum and maximum values in the input array
    double minVal = arr[0];
    double maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    // Determine the range of values and the number of buckets
    double range = maxVal - minVal;
    int numBuckets = size;
    double bucketSize = range / numBuckets;
    // Create an array of linked lists (buckets)
    struct Node* buckets[numBuckets];
    for (int i = 0; i < numBuckets; i++) {
        buckets[i] = NULL;
    }
    // Place each element in the appropriate bucket
    for (int i = 0; i < size; i++) {
        int index = (int)((arr[i] - minVal) / bucketSize);
        insert(&buckets[index], arr[i]);
    }
    // Sort each bucket and concatenate them to get the sorted array
    int index = 0;
    for (int i = 0; i < numBuckets; i++) {
        sortBucket(&buckets[i]);
        struct Node* current = buckets[i];
        while (current != NULL) {
            arr[index++] = current->data;
            current = current->next;
        }
    }
}
int main() {
    double arr[] = {3.2, 0.4, 2.8, 4.5, 1.1, 0.9};
    int size = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");
    return 0;
}
