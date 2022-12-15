#include <stdio.h>

// function to swap two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print an array
void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// function to partition the array into two subarrays around a pivot element
int partition(int arr[], int low, int high) {
  // choose the pivot element as the last element in the array
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j <= high - 1; j++) {
    // if the current element is smaller than the pivot, increment i and swap arr[i] and arr[j]
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  // swap the pivot element with arr[i + 1]
  swap(&arr[i + 1], &arr[high]);

  // return the index of the pivot element
  return (i + 1);
}

// recursive quick sort function
void quick_sort(int arr[], int low, int high) {
  // if the array has more than one element, partition it and sort the two subarrays recursively
  if (low < high) {
    int pi = partition(arr, low, high);

    // print the array after partitioning it
    print_array(arr, high + 1);

    quick_sort(arr, low, pi - 1);
    quick_sort(arr, pi + 1, high);
  }
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // sort the array using quick sort
  quick_sort(arr, 0, n - 1);

  // print the sorted array
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
