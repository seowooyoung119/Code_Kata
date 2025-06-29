#include <vector>

int solution(std::vector<int> number) 
{
    int answer=0;
    int A_NumberSize=number.size()-2;
    int B_NumberSize=A_NumberSize+1;
    int C_NumberSize=B_NumberSize+1;

    for(int i=0; i<A_NumberSize; ++i)
    {
        for(int j=i+1; j<B_NumberSize; ++j)
        {
            int ABPlus=number[i]+number[j];
            for(int k=j+1; k<C_NumberSize; ++k){if(0==ABPlus+number[k]){++answer;}}
        }
    }
    return answer;
}