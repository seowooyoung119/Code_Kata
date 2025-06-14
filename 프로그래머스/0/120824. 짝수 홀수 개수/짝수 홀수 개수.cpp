#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    
    int counta = 0; // 짝수 개수
    int countb = 0; // 홀수 개수
    
    for(int i = 0; i < num_list.size(); ++i)
    {
        if(num_list[i] % 2 == 0)
        {
            ++counta; // 짝수
        }
        else
        {
            ++countb; // 홀수
        }
    }
    
    answer.push_back(counta);
    answer.push_back(countb);
    
    return answer;
}