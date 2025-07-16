#include <vector>

using std::vector;

bool SosuCehck(int Num)
{
    if(Num < 2) return false;
    
    for(int i = 2; i * i <= Num; ++i)
    {
        if(Num % i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) 
{

    int answer = 0;
    
    for(int i = 0; i < nums.size(); ++i)
    {
        for(int j = i+1; j <  nums.size(); ++j)
        {
            for(int k = j+1; k< nums.size(); ++k)
            {
                int Num = nums[i] + nums[j] + nums[k];
                
                if(SosuCehck(Num)) ++answer;
                
                }
            }
        }
    return answer;
}