#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) 
{
    int answer = 0;
    
    while(left<=right)
    {
        (int)sqrt(left)*(int)sqrt(left)==left? answer-= left : answer += left;
        ++left;
    }
    
    
    return answer;
}