#include <stdio.h>

// Function to implement shell sort
void shell_sort(int arr[], int n) {
    // Start with a gap of n/2
    for (int gap = n/2; gap > 0; gap /= 2) {
        // Do an insertion sort for each gap
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            // Shift all elements that are greater than temp
            // and are at a distance of "gap" from each other
            // to the right by "gap"
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            // Insert temp at the correct position
            arr[j] = temp;
        }

        // Print the array after each iteration
        printf("Array after iteration %d: ", n/gap);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    // Read the number of elements in the array
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the array elements
    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using shell sort
    shell_sort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
