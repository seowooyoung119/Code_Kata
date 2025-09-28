#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) 
{
    queue<pair<int,int>> q;
    
    for (int i = 0; i < priorities.size(); i++) 
    {
        q.push({priorities[i], i});
    }
    
    int answer = 0;
    
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        
        bool hasHigher = false;
        queue<pair<int,int>> temp = q;
        
        while (!temp.empty())
        {
            if (temp.front().first > cur.first)
            {
                hasHigher = true;
                break;
            }
            temp.pop();
        }
        
        if (hasHigher)
        {
            q.push(cur);
        } 
        else 
        {
            answer++;
            if (cur.second == location) return answer;
        }
    }
    
    return answer;
}
