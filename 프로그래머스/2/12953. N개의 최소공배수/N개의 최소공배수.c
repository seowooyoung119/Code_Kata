#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) 
{
    return a * b / gcd(a, b);
}

int solution(int arr[], size_t arr_len) 
{
    int answer = arr[0]; 
    
    for (size_t i = 1; i < arr_len; i++) 
    {
        answer = lcm(answer, arr[i]); 
    }
    
    return answer;
}
