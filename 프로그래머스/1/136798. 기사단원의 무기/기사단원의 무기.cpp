#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int number, int limit, int power) 
{
    vector<int> divisorCount(number+1, 0);
    
    for(int i =1; i <= number; ++i)
    {
        for(int j = i; j <= number; j += i)
        {
             divisorCount[j]++;
        }
    }
    
    int totalWeight = 0;
    
    for(int i = 1; i <= number; ++i) 
    {
        if(divisorCount[i] > limit) 
        {
            totalWeight += power;
        } 
        else 
        {
            totalWeight += divisorCount[i];
        }
    }
    
    return totalWeight;
    
}