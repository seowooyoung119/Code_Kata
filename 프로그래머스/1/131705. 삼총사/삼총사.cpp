#include <vector>

int solution(std::vector<int> number) 
{
    int answer = 0;
    
    for(int i=0; i<number.size()-2; ++i)
    {
        for(int j=i+1; j<number.size()-1; ++j)
        {
            for(int k=j+1; k<number.size(); ++k)
            {
                if(0==number[i]+number[j]+number[k]){++answer;}
            }
        }
    }
    return answer;
}