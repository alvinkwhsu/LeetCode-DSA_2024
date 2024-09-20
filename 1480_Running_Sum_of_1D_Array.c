#include <stdio.h>
#include <stdlib.h>

/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]¡Knums[i]).

Return the running sum of nums.

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]


Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {

    printf("numsSize=%d\n", numsSize);
    for (int i=0; i<numsSize; i++){
        printf("nums[%d]=%d\n", i, nums[i]);
    }

    /* The returned array must be malloced, assume caller calls free(). */
    int *ret_nums = (int *)malloc(sizeof(int) * numsSize);
    if(ret_nums == NULL)    return NULL;

    // Unused variable
    *returnSize = numsSize;

    // Initial
    ret_nums[0] = nums[0];
    printf("ret_nums[0]=%d\n", ret_nums[0]);

    for (int i=1; i<numsSize; i++){
        ret_nums[i] = ret_nums[i-1]+nums[i];
        printf("ret_nums[%d]=%d\n", i, ret_nums[i]);
    }

    return ret_nums;
}
