#include <vector>

using std::vector;

int solution(vector<int> num_list) 
{
    int sum =1, plus=0;
    for(auto num : num_list)
    {
        sum *= num;
        plus += num;
    }
    if(sum < (plus*plus))
    {
        return 1;
    }
    else if(sum > (plus*plus))
    {
        return 0;
    }
}