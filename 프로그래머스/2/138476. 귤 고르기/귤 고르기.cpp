#include <vector>
#include <unordered_map>
#include <algorithm>

int solution(int k, std::vector<int> tangerine)
{
    std::unordered_map<int, int> freq;

    for (int size : tangerine) 
    {
        freq[size]++;
    }

    std::vector<int> counts;
    
    for (auto& p : freq) 
    {
        counts.push_back(p.second);
    }
    
    std::sort(counts.begin(), counts.end(), std::greater<int>());

    int answer = 0;
    int selected = 0;
    
    for (int count : counts) 
    {
        selected += count;
        answer++; 
        
        if (selected >= k) 
        {
            break;
        }
    }

    return answer;
}
