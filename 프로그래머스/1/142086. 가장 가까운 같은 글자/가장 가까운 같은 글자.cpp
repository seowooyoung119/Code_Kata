#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    unordered_map<char, int> AP_MAP;
    
    for(int i = 0; i < s.length(); ++i)
    {
        char Current_AP = s[i];
        
        if(AP_MAP.find(Current_AP) == AP_MAP.end())
        {
            answer.push_back(-1);
        }           
        else
        {
            int New_Index = i - AP_MAP[Current_AP];
            answer.push_back(New_Index);
        }
        
     AP_MAP[Current_AP] = i; 
        
    }
    return answer;
}