#include <stdio.h>
#include <stdlib.h>

extern int execute_runningSum(void);
extern int execute_maximumWealth(void);
extern int* runningSum(int* nums, int numsSize, int* returnSize);
extern int maximumWealth(int** accounts, int accountsSize, int* accountsColSize);

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
    int test_no=1672;

    switch (test_no){
        case 1480:
            execute_runningSum();
            break;
        case 1672:
            execute_maximumWealth();
            break;
        default:
            printf("unknon test_no!\n");
    }

    return 0;
}
