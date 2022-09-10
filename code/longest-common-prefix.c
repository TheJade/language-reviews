//https://leetcode.com/problems/longest-common-prefix/

#include <stdio.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    
    char * letters = strs[0];
    int i,j, len_letters;
    
    for (len_letters = 0; letters[len_letters] != '\0'; ++len_letters);
    
    for (i = 1; i < strsSize; i++)  {
        
        // gets the length of the letter string
        for (j = 0; j < len_letters; j++) {
            if (letters[j] != strs[i][j])    {
                len_letters = j;
                letters[j] = '\0';
                break;
            }
        } 
    }

    return letters;
}
