#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int* solution(const char* wallpaper[], size_t wallpaper_len) 
{
    int* answer = (int*)malloc(4 * sizeof(int));
    
    int min_row = INT_MAX;
    int min_col = INT_MAX;
    int max_row = -1;
    int max_col = -1;
    
    for (int i = 0; i < wallpaper_len; i++) 
    {
        int col_len = strlen(wallpaper[i]);
        
        for (int j = 0; j < col_len; j++) 
        {
            if (wallpaper[i][j] == '#')
            {
                if (i < min_row) min_row = i;
                if (i > max_row) max_row = i;
                if (j < min_col) min_col = j;
                if (j > max_col) max_col = j;
            }
        }
    }
    
     answer[0] = min_row;     
    answer[1] = min_col;          
    answer[2] = max_row + 1;  
    answer[3] = max_col + 1;  
    
    return answer;
}