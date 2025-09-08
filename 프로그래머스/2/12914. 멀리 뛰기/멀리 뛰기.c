#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int n)
{
    const int MOD = 1234567;

    if (n == 1) return 1;
    if (n == 2) return 2;

    long long prev1 = 1;
    long long prev2 = 2;
    long long current = 0;

    for (int i = 3; i <= n; i++) 
    {
        current = (prev1 + prev2) % MOD;
        prev1 = prev2;
        prev2 = current;
    }

    return current;
}
