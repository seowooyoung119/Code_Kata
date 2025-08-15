#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) 
{
    int score[26] = {0};

    int points[] = {0, 3, 2, 1, 0, 1, 2, 3};

    for (size_t i = 0; i < survey_len; i++) 
    {
        char disagree = survey[i][0]; 
        char agree    = survey[i][1]; 
        int choice = choices[i];

        if (choice < 4) 
        { 
            score[disagree - 'A'] += points[choice];
        } 
        else if (choice > 4) 
        {
            score[agree - 'A'] += points[choice];
        }
    }

    char* answer = (char*)malloc(5);
    answer[4] = '\0';

    answer[0] = (score['R'-'A'] >= score['T'-'A']) ? 'R' : 'T';
    answer[1] = (score['C'-'A'] >= score['F'-'A']) ? 'C' : 'F';
    answer[2] = (score['J'-'A'] >= score['M'-'A']) ? 'J' : 'M';
    answer[3] = (score['A'-'A'] >= score['N'-'A']) ? 'A' : 'N';

    return answer;
}