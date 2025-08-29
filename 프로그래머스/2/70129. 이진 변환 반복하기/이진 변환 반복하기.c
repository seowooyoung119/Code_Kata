#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* toBinaryString(int num) 
{
    char buffer[32];
    int idx = 0;

    if (num == 0)
    {
        char* result = (char*)malloc(2);
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    while (num > 0) 
    {
        buffer[idx++] = (num % 2) + '0';
        num /= 2;
    }
    
    buffer[idx] = '\0';

    char* result = (char*)malloc(idx + 1);
    
    for (int i = 0; i < idx; i++)
    {
        result[i] = buffer[idx - i - 1];
    }
    result[idx] = '\0';
    return result;
}

int* solution(const char* s) 
{
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = 0;
    answer[1] = 0; 

    char* current = strdup(s); 

    while (strcmp(current, "1") != 0) 
    {
        int len = strlen(current);
        int zeroCount = 0;
        
        for (int i = 0; i < len; i++) 
        {
            if (current[i] == '0') zeroCount++;
        }

        answer[1] += zeroCount;   
        int newLen = len - zeroCount; 

        free(current); 
        current = toBinaryString(newLen); 

        answer[0]++;
    }

    free(current);
    return answer;
}
