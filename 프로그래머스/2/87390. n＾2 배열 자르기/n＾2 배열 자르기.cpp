#include <vector>
#include <algorithm>

using std::vector;

vector<int> solution(int n, long long left, long long right) 
{
    vector<int> answer;
    
    long long Hang=0, Yall=0;
    int Num=0;
    
    for(long long i = left; i <= right; ++i)
    {
        Hang = i / n; 
        Yall = i % n;
        
        Num = std::max(Hang, Yall) + 1;
        
        answer.push_back(Num);
    }
    
    return answer;
}