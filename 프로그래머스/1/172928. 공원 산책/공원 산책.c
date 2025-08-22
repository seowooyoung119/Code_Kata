#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
char dir[4] = {'N','S','W','E'};

int* solution(const char* park[], size_t park_len, const char* routes[], size_t routes_len) 
{
    int startY = 0, startX = 0;
    int W = strlen(park[0]); 
    int H = park_len;        

    for (int y = 0; y < H; y++)
    {
        for (int x = 0; x < W; x++)
        {
            if (park[y][x] == 'S')
            {
                startY = y;
                startX = x;
            }
        }
    }

    for (int r = 0; r < routes_len; r++)
    {
        char d;
        int n;
        
        sscanf(routes[r], "%c %d", &d, &n); 

        int dirIndex = -1;
        
        for (int i = 0; i < 4; i++)
        {
            if (dir[i] == d) dirIndex = i;
        }

        int ny = startY;
        int nx = startX;
        bool blocked = false;

        for (int step = 1; step <= n; step++) 
        {
            ny += dy[dirIndex];
            nx += dx[dirIndex];

            if (ny < 0 || ny >= H || nx < 0 || nx >= W) 
            {
                blocked = true;
                break;
            }

            if (park[ny][nx] == 'X') 
            {
                blocked = true;
                break;
            }
        }

        if (!blocked) 
        {
            startY = ny;
            startX = nx;
        }
    }

    int* answer = (int*)malloc(2 * sizeof(int));
    answer[0] = startY;
    answer[1] = startX;
    
    return answer;
}
