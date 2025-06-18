#include <vector>
int solution(std::vector<int> absolutes, std::vector<bool> signs) 
{
    auto answer=0;
    for(int i=0; i < signs.size(); i++)
    {
        answer += absolutes[i] * (signs[i] ? 1 : -1);
    }
    return answer;
}