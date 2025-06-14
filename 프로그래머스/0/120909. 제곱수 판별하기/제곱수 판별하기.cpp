#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) 
{
    int i = sqrt(n);
    return ((n==(i*i))? 1: 2);
}