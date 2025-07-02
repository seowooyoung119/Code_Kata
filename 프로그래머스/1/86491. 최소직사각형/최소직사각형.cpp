#include <vector>

int solution(std::vector<std::vector<int>> sizes)
{
    int answer = 0;
    int w = 0, h = 0;
    
    for(size_t i = 0; i < sizes.size(); ++i)
    {            
        if (sizes[i][0] < sizes[i][1])
        {
            std::swap(sizes[i][0], sizes[i][1]);
        }
        
        if(sizes[i][0] > w) w = sizes[i][0];        
        if(sizes[i][1] > h) h = sizes[i][1];        
    }
    answer = w * h;
    return answer;
}