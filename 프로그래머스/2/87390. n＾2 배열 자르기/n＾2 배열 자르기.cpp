#include <vector>
#include <algorithm>

using std::vector;

vector<int> solution(int n, long long left, long long right) 
{
    vector<int> answer;
    long long row=0, col=0;
    int value=0;
    
    for(long long i = left; i <= right; ++i)
    {
        row = i / n; 
        col = i % n;
        
        value = std::max(row, col) + 1;
        
        answer.push_back(value);
    }
    
    return answer;
}