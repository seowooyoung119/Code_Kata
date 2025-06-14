#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) 
{
    int answer = 2;
    int StopCaluate = sqrt(n);
    
    for(int i=1; i<StopCaluate; ++i)
    {   
        if(0==n%(i+1))
        {
            answer +=2;
        }
    }
    
    if(n==pow(StopCaluate,2))
    {
         answer -=1;
    }
    
    return answer;
}