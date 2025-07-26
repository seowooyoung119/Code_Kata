#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) 
{
    vector<int> answer;
    unordered_map<char, int> KeyPress;
    
    for(int i = 0;  i < keymap.size(); ++i)
    {
        for(int j = 0; j < keymap[i].size(); ++j)
        {
            char n = keymap[i][j];
            
            if(KeyPress.find(n) == KeyPress.end() || KeyPress[n] > j+1)
            {
                KeyPress[n] = j+1;
            }
        }   
    }
    
    for(auto target : targets)
    {
        int TotalPress = 0;
        bool Possible = true;
        
        for(auto n : target)
        {
            if(KeyPress.find(n) == KeyPress.end())
            {
                Possible = false;
                break;
            }
            TotalPress += KeyPress[n];
        }
        
        answer.push_back(Possible ? TotalPress : -1);
    }
    
    return answer;
}