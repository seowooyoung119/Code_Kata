#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    unordered_map<char, int> BM;
        
    for(int i = 0; i < s.length(); ++i)
    {
        char AP = static_cast<char>(s[i]);
        
        if(BM.find(AP) != BM.end())
        {
            int Distance = i - BM[AP];
            answer.push_back(Distance);
        }
        else
        {
            answer.push_back(-1);
        }
        
        BM[AP] = i; 
    }
    
    return answer;
}