#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) 
{
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> Singers;
    
    for(int i =0; i < score.size(); ++i)
    {
        Singers.push(score[i]);
        
        if(Singers.size() > k)
        {
            Singers.pop();
        }
        
        answer.push_back(Singers.top());
        
    }
    
    return answer;
}