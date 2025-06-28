#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    int Index = 0;
    
    for(int i = 0; i<s.length(); ++i)
    {
        if(s[i] == ' '){answer += s[i]; Index = 0;}
        
        else
        {
            if(Index % 2 == 0)
                answer += toupper(s[i]);
            else
                answer += tolower(s[i]);
            ++Index;
        }   
    }
    return answer;
}