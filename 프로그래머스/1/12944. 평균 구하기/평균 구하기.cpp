#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) 
{
    double answer = 0;
    int sum = 0;
    size_t size = arr.size();

    for (int i = 0; i < size; ++i)
    {
        sum = sum + arr[i];
    }

    answer = (double)sum / (double)size;

    return answer;
}