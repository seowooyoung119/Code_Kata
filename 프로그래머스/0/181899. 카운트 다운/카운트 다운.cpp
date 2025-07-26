#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int start_num, int end_num) 
{
    int idx = 0;
    
    vector<int> answer(start_num - end_num+1, start_num);
    
    transform(answer.begin(), answer.end(), answer.begin(), [&idx](int x){return x - idx++;});
    return answer;
}