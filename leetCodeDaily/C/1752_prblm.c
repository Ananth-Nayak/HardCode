#include <stdio.h>
#include <stdbool.h>

// Function that returns true if the array is a rotated sorted array
bool check(int *nums, int numsSize)
{
  int count = 0;
  for (int i = 0; i < numsSize; i++)
  {
    // Compute the next index in circular manner
    int next = (i + 1) % numsSize;
    if (nums[i] > nums[next])
    {
      count++;
    }
  }
  return count <= 1;
}

int main()
{
  int nums1[] = {4, 5, 1, 2, 3}; // Expected true
  int nums2[] = {3, 5, 1, 4, 2}; // Expected false

  int size1 = sizeof(nums1) / sizeof(nums1[0]);
  int size2 = sizeof(nums2) / sizeof(nums2[0]);

  printf("nums1 is a rotated sorted array: %s\n", check(nums1, size1) ? "true" : "false");
  printf("nums2 is a rotated sorted array: %s\n", check(nums2, size2) ? "true" : "false");

  return 0;
}

// my leetcode answer
// bool check(int* nums, int numsSize) {
//     int i;
//     for(i=0; i<numsSize-1; i++){
//         if(nums[i + 1] < nums[i]){
//             i++;
//             while(i<numsSize-1){
//                 if(nums[i + 1] < nums[i]){
//                     return false;
//                 }
//                 i++;
//             }
//             if(nums[0]<nums[i]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }