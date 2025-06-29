#include <string>

std::string solution(std::string s) 
{
    std::string answer = "";
    int Index = 0;
    for(int i = 0; i < s.length(); ++i)
    {
        if(' ' == s[i]){answer += ' '; Index = 0;}   
        else if(0 == Index % 2){answer += toupper(s[i]); ++Index;}
        else {answer += tolower(s[i]); ++Index;}
    }
    return answer;
}