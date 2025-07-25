#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y)
{
    vector<int> CountX(10, 0);
    vector<int> CountY(10, 0);
    
    for(char c : X)
    {
        ++CountX[c - '0'];
    }
    
    for(char c : Y)
    {
        ++CountY[c - '0'];
    }
    
    string Answer ="";
    
    for(int i = 9; i >= 0; --i)
    {
        int Common = min(CountX[i],CountY[i]);
        
        for(int j = 0; j < Common; ++j)
        {
            Answer += to_string(i);
        }
    }
    
    if(Answer.empty())
    {
        return "-1";
    }
    
    if('0' == Answer[0])
    {
        return "0";
    }
    
    return Answer;
    
}