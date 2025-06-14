#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    long long i = sqrt(n);
    if(i*i == n)return pow(i+1,2);    
    else return -1; 
}