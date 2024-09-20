#include <stdio.h>
#include <stdlib.h>

/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
Example 2:

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation:
1st customer has wealth = 6
2nd customer has wealth = 10
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.
Example 3:

Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
Output: 17


Constraints:

m == accounts.length
n == accounts[i].length
1 <= m, n <= 50
1 <= accounts[i][j] <= 100
*/

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {

    printf("accountsSize=%d, accountsColSize=%d\n", accountsSize, *accountsColSize);
    printf("accounts+1=%d\n", **(accounts+1));
    printf("accounts+2=%d\n", *(*accounts+1));

    int wealth=0, total_weath=0;
    for(int richman=0; richman<accountsSize; richman++){

        wealth=0; // Init wealth

        // Calc total wealth
        for(int bank=0;bank<*accountsColSize;bank++){
            wealth+=accounts[richman][bank];
        }

        // Update total_weath
        if (wealth >= total_weath) total_weath=wealth;
        printf("richman %d, wealth=%d\n", richman, wealth);
    }

    return total_weath;
}

int execute_maximumWealth(void) {
    //int accounts1[2][3] = {{1,2,3},{3,2,1}};
    //int accounts2[3][2] = {{1,5},{7,3},{3,5}};
    //int accounts3[3][3] = {{2,8,7},{7,1,3},{1,9,5}};
    //int accountsSize = sizeof(accounts1)/sizeof(accounts1[0]);           // ROW
    //int accountsColSize = sizeof(accounts1[0])/sizeof(accounts1[0][0]);  // COL

    // memory fragment : malloc
    //int **accounts1 = (int **)malloc(3 * sizeof(int *));

    // Google 雙層指標(double pointer or pointer of pointer)
    int accountsSize = 2;
    int accountsColSize = 3;

    int **accounts1 = calloc( accountsSize, sizeof( int * ) );
    for ( int i = 0; i < accountsSize; ++i ) {
        accounts1[i] = calloc( accountsColSize, sizeof( int ) );
    }

    accounts1[0][0] = 1;
    accounts1[0][1] = 2;
    accounts1[0][2] = 3;
    accounts1[1][0] = 3;
    accounts1[1][1] = 2;
    accounts1[1][2] = 1;

    int total_wealth = maximumWealth(accounts1, accountsSize, &accountsColSize);

    for ( int i = 0; i < accountsSize; ++i ) {
        free(accounts1[i]);
    }
    free(accounts1);

    return 0;
}
