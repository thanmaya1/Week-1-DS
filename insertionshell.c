#include <stdio.h>

void insertion_sort(int arr[], int n) {
  // Insertion sort implementation
  int i, j, current_val;
  for (i = 1; i < n; i++) {
    current_val = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > current_val) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current_val;
  }
}

void shell_sort(int arr[], int n) {
  // Shell sort implementation
  int gap, i, j, current_val;
  for (gap = n / 2; gap > 0; gap /= 2) {
    for (i = gap; i < n; i++) {
      current_val = arr[i];
      j = i;
      while (j >= gap && arr[j - gap] > current_val) {
        arr[j] = arr[j - gap];
        j -= gap;
      }
      arr[j] = current_val;
    }
  }
}

int main() {
  // Test arrays
  int arr1[] = {5, 2, 4, 6, 1, 3};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int arr2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  // Insertion sort
  printf("Original array (insertion sort): ");
  for (int i = 0; i < n1; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");
  insertion_sort(arr1, n1);
  printf("Sorted array: ");
  for (int i = 0; i < n1; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  // Shell sort
  printf("\nOriginal array (shell sort): ");
  for (int i = 0; i < n2; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");
  shell_sort(arr2, n2);
  printf("Sorted array: ");
  for (int i = 0; i < n2; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  return 0;
}
