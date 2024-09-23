#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // C99, bool, true and false
#include <string.h>


/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.



Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true


Constraints:

1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.


Date: 2024/09/23
*/

bool canConstruct(char* ransomNote, char* magazine) {

    //printf("ransomNote=%s, magazine=%s\n", ransomNote, magazine);
    //printf("ransomNote length=%lld\n", strlen(ransomNote));

    if (0 == strncmp(ransomNote, magazine, strlen(ransomNote)))
        return true;
    else {
        for (int i=0; i<strlen(ransomNote);i++) {
            printf("*(ransomNote+%d)=%c\n", i,*(ransomNote+i));
            if (*(ransomNote+i) == *(magazine+i)) {
                if (i == strlen(ransomNote))
                    return true;

                continue;
            } else
                return false;
        }
    }

    return true;
}

int execute_canConstruct(void) {
    char *ransomNote="aa"; // aa
    char *magazine="aab"; // aa, aab

    if (true == canConstruct(ransomNote, magazine))
        printf("ransomNote \"%s\" can be constructed by using the letters from magazine \"%s\" \n", ransomNote, magazine);
    else
        printf("ransomNote \"%s\"  cannot be constructed by using the letters from magazine \"%s\" \n", ransomNote, magazine);

    return canConstruct(ransomNote, magazine);
}
