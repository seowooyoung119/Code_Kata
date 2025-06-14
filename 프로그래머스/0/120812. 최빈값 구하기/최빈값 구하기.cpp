#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> array)
{
    int MaxFrequency = 0; 
    int Num = -1;       
    int CountOfNum = 0;

    unordered_map<int,int> freq_map;

    for(int num : array)
    {
        ++freq_map[num];
    }

    for(auto it = freq_map.begin(); it != freq_map.end(); ++it)
    {
        if(it->second > MaxFrequency)
        {
            MaxFrequency = it->second; 
            Num = it->first;         
            CountOfNum = 1;           
        }
      
        else if(it->second == MaxFrequency)
        {
            ++CountOfNum;         
        }
    }

    if (CountOfNum > 1) 
    {
        return -1; 
    } 
    else 
    {
        return Num;
    }
}
