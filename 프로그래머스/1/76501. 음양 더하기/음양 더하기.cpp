#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) 
{    
    int answer=0;
    
    for(int i=0; i<signs.size();++i)
    {
        if(false==signs[i])
        {
            int num=-1;
            answer+=(num)*(absolutes[i]);
            continue;
        }
        else
        {
        answer+=absolutes[i];
        }
    }
    return answer;    
}