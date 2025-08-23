#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int get_index(const char* id, const char* id_list[], size_t id_list_len) 
{
    for (size_t i = 0; i < id_list_len; i++) 
    {
        if (strcmp(id_list[i], id) == 0) return (int)i;
    }
    return -1;
}

int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k)
{
    int* answer = (int*)calloc(id_list_len, sizeof(int));

    bool** reported_matrix = (bool**)malloc(id_list_len * sizeof(bool*));
    
    for (size_t i = 0; i < id_list_len; i++)
    {
        reported_matrix[i] = (bool*)calloc(id_list_len, sizeof(bool));
    }

    int* reported_count = (int*)calloc(id_list_len, sizeof(int));

    for (size_t i = 0; i < report_len; i++) 
    {
        char reporter[21], reported[21];
        sscanf(report[i], "%s %s", reporter, reported);

        int r_idx = get_index(reporter, id_list, id_list_len);
        int t_idx = get_index(reported, id_list, id_list_len);

        if (!reported_matrix[r_idx][t_idx])
        {
            reported_matrix[r_idx][t_idx] = true;
            reported_count[t_idx]++;
        }
    }

    for (size_t t = 0; t < id_list_len; t++)
    {
        if (reported_count[t] >= k)
        { 
            for (size_t r = 0; r < id_list_len; r++) 
            {
                if (reported_matrix[r][t])
                {
                    answer[r]++;
                }
            }
        }
    }

    for (size_t i = 0; i < id_list_len; i++) 
    {
        free(reported_matrix[i]);
    }
    
    free(reported_matrix);
    free(reported_count);

    return answer;
}
