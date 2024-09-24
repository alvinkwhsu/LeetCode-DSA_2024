#include <stdio.h>
#include <stdlib.h>

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.


Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

Date : 2024/09/24
*/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    printf("numsSize=%d\n", numsSize);
    printf("target=%d\n", target);

    for (int i=0;i<numsSize;i++) {
        printf("nums[%d]=%d\n", i, nums[i]);
    }

    int diff=0;
    int *result = (int *)malloc(sizeof(int) * (*returnSize));
    if (result == NULL) return NULL;

    for (int i=0;i<numsSize;i++) {
        diff = target - nums[i];
        if(diff > 0) {
            printf("diff=%d\n", diff);
            for (int j=i+1;j<numsSize;j++) {
                if (nums[j] == diff) {
                    *(result+0) = i;
                    *(result+1) = j;
                    printf("%d, %d\n", i, j);
                    break;
                }
            }
        }

    }

    return result;

}

int execute_twoSum(void) {
    int nums1[4] = {2,7,11,15}, target1 = 9;
    int nums2[3] = {3,2,4}, target2 = 6;
    int nums3[2] = {3,3}, target3 = 6;
    int *sum=NULL;
    int returnSize = 2;

    sum = twoSum(nums1, 4, target1, &returnSize);
    if (sum == NULL) return 0;

    free(sum);

    return 1;
}
