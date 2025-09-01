#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n)
{
    int answer = 0;
	int a = 0; 
	int b = 1;
	int c = 0;

    for (int i = 2; i <= n; ++i)
    {
        c = (a + b) % 1234567;
        a = b;
        b = c;
    }

	answer = c;

    return answer;
}
