#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_SIZE 131071

typedef struct 
{
    const char* key;
    size_t value;
} HashNode;

size_t hash_func(const char* str) 
{
    size_t hash = 5381;
    while (*str)
        hash = ((hash << 5) + hash) + (unsigned char)(*str++);
    return hash % HASH_SIZE;
}

void hash_put(HashNode* table, const char* key, size_t value) 
{
    size_t h = hash_func(key);
    while (table[h].key != NULL && strcmp(table[h].key, key) != 0)
        h = (h + 1) % HASH_SIZE;
    table[h].key = key;
    table[h].value = value;
}

size_t hash_get(HashNode* table, const char* key) 
{
    size_t h = hash_func(key);
    while (table[h].key != NULL)
    {
        if (strcmp(table[h].key, key) == 0)
            return table[h].value;
        h = (h + 1) % HASH_SIZE;
    }
    return (size_t)-1;
}

char** solution(const char* players[], size_t players_len, const char* callings[], size_t callings_len)
{
    char** answer = (char**)malloc(sizeof(char*) * players_len);
    HashNode* table = (HashNode*)calloc(HASH_SIZE, sizeof(HashNode));

    for (size_t i = 0; i < players_len; i++)
    {
        answer[i] = (char*)players[i];
        hash_put(table, players[i], i);
    }

 
    for (size_t i = 0; i < callings_len; i++)
    {
        const char* called = callings[i];
        size_t idx = hash_get(table, called);
        if (idx == 0) continue;

        size_t prev_idx = idx - 1;

        const char* temp_name = answer[prev_idx];
        answer[prev_idx] = answer[idx];
        answer[idx] = temp_name;

        hash_put(table, answer[prev_idx], prev_idx);
        hash_put(table, answer[idx], idx);
    }

    free(table);
    return answer;
}
