#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int ingredient[], size_t ingredient_len) 
{
    
    int answer = 0;
    int top = 0;
    
    int stack[ingredient_len];

    for (size_t i = 0; i < ingredient_len; i++) 
    {
        stack[top++] = ingredient[i]; 

        if (top >= 4 && stack[top-4] == 1 && stack[top-3] == 2 && stack[top-2] == 3 && stack[top-1] == 1) 
        {
            top -= 4;
            answer++;
        }
    }

    return answer;
}
