#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) 
{
    int Zero = 0;
    int MatchNum = 0;
    
    for(auto Num : lottos)
    {
        if(0 == Num)
        {
            ++Zero;
            continue;
        }
        
        if(find(win_nums.begin(), win_nums.end(), Num) != win_nums.end())
        {
            ++MatchNum;  
        }
    }
    
    auto Rank = [](int Count)
    {
        return Count >= 2 ? 7 - Count : 6;
    };
    
    return {Rank(Zero + MatchNum), Rank(MatchNum)}; 
}