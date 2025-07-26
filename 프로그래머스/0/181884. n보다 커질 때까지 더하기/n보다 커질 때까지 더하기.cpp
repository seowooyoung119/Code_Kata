#include <vector>

using std::vector;

int solution(vector<int> numbers, int n) 
{
    int answer = 0;
    
    for(auto& num : numbers)
    {
        answer += num;
        
        if(n < answer)
        {
            return answer;
        }        
    }
}