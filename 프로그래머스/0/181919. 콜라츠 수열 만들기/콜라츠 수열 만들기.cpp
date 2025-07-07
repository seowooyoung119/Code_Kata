#include <string>
#include <vector>

using std::vector;

vector<int> solution(int n) 
{
    vector<int> answer;
    answer.push_back(n);
    
    while(1 != n)
    {    
        if(0 == n % 2)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        answer.push_back(n);
    }
    return answer;
}