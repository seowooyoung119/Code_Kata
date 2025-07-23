#include <vector>
#include <set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) 
{
    set<int> Lost(lost.begin(),lost.end());
    set<int> Reserve(reserve.begin(),reserve.end());
    
    for(auto i = Lost.begin(); i != Lost.end();)
    {
        if(Reserve.count(*i))
        {
            Reserve.erase(*i);
            i = Lost.erase(i);
        }
        else
        {
            ++i;
        }
    }
        
    for(auto i : Reserve)
    {
        if(Lost.count(i-1))
        {
            Lost.erase(i-1);
        }
        else if(Lost.count(i+1))
        {
            Lost.erase(i+1);
        }
    }
    
    return n - Lost.size();
}