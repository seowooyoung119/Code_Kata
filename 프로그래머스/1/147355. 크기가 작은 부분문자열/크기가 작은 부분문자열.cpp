#include <string>

int solution(std::string t, std::string p) 
{
    int pLen = p.size(), tLen = t.size(), answer = 0;
    long long pNum = 0, num = 0, pow10 = 1;
    
    for (char ch : p) 
    {
        pNum = pNum * 10 + (ch - '0');
    }

    for (int i = 0; i < pLen; ++i) 
    {
        num = num * 10 + (t[i] - '0');
        if (i < pLen - 1) pow10 *= 10;
    }

    if (num <= pNum) ++answer;

    for (int i = pLen; i < tLen; ++i) 
    {
        num = (num - (t[i - pLen] - '0') * pow10) * 10 + (t[i] - '0');
        if (num <= pNum) ++answer;
    }
    
    return answer;
}
