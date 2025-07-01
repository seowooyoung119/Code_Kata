#include <string>

int solution(std::string t, std::string p) 
{
    int Answer = 0;
    int Tsize = t.length();
    int Psize = p.length();
    int Len = Tsize - Psize+1;
    std::string StNum = "";
    
    for(int i = 0; i < Len; ++i)
    {
        int RunSize = i + Psize;
        
        for(int j = i; j < RunSize; ++j)
        {
            StNum += t[j];
        }
        
        if(std::stoll(StNum) <= std::stoll(p))
        {
            ++Answer;
        }
        
        StNum = "";
        RunSize = 0;
    }
    
    return Answer;
}