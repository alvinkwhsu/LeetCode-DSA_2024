#include <stdio.h>
#include <stdlib.h>

extern int* runningSum(int* nums, int numsSize, int* returnSize);

/* =============================================================
//
// main.c
//
// This is a record of LeetCode practice
//
// Chapter 4 : The LeetCode Beginner's Guide
//
// Created by Alvin Hus/Kuowei Hsu on 09/2024.
// Copyright (c) 2014 Alvin Hus/Kuowei Hsu All rights reserved.
//
// =============================================================*/
int main(int argc, char const *argv[])
{
    int nums1[] = {1,2,3,4};
    int nums2[] = {1,1,1,1,1};
    int nums3[] = {3,1,2,10,1};
    int *returnSize = NULL;

    int *array = runningSum(nums1, sizeof(nums1)/sizeof(int), returnSize);

    free(array);


    return 0;
}
