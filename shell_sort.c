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
    }
}
