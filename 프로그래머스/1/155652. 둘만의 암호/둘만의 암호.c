#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s, const char* skip, int index)
{
    bool skipTable[26] = {false};
    
    for (int i = 0; skip[i] != '\0'; i++) 
    {
        skipTable[skip[i] - 'a'] = true;
    }

    int len = strlen(s);
    char* answer = (char*)malloc(len + 1);

    for (int i = 0; i < len; i++) 
    {
        char c = s[i];
        int count = 0;
        while (count < index)
        {
            c = (c - 'a' + 1) % 26 + 'a';
            if (!skipTable[c - 'a']) 
            {
                count++;
            }
        }
        answer[i] = c;
    }
    answer[len] = '\0';
    return answer;
}