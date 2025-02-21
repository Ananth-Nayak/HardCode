#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

/**
 * Function to find intersection of two arrays
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *intersect(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize)
{
  // Sort both arrays
  qsort(nums1, nums1Size, sizeof(int), compare);
  qsort(nums2, nums2Size, sizeof(int), compare);

  // Allocate memory for the result array (worst case: min size of nums1 and nums2)
  int *result = (int *)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
  int index = 0, i = 0, j = 0;

  // Two-pointer approach
  while (i < nums1Size && j < nums2Size)
  {
    if (nums1[i] < nums2[j])
    {
      i++; // Move i forward
    }
    else if (nums1[i] > nums2[j])
    {
      j++; // Move j forward
    }
    else
    {
      result[index++] = nums1[i]; // Add common element
      i++;
      j++;
    }
  }

  *returnSize = index; // Update return size
  return result;
}

// Driver function to test
int main()
{
  int nums1[] = {4, 9, 5};
  int nums2[] = {9, 4, 9, 8, 4};
  int returnSize;

  int *result = intersect(nums1, 3, nums2, 5, &returnSize);

  printf("Intersection: ");
  for (int i = 0; i < returnSize; i++)
  {
    printf("%d ", result[i]);
  }
  printf("\n");

  free(result); // Free allocated memory
  return 0;
}
