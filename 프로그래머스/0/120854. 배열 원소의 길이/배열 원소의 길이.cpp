#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) 
{
    vector<int> answer;
    
    for(int i=0; i<strlist.size(); ++i)
    {
        answer.push_back(0);
        
        for(int j=0; j<strlist[i].size(); ++j)
        {
            answer[i] +=1;
        }
    }
    
    
    return answer;
}