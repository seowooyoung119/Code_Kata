#include <string>

int solution(std::string t, std::string p) 
{
    int answer = 0;
    int tSize = t.length();
    int pSize = p.length();
    long long pNum = std::stoll(p); // 비교 기준 숫자

    for (int i = 0; i <= tSize - pSize; ++i)
    {
        std::string sub = t.substr(i, pSize); // 부분 문자열 추출
        if (std::stoll(sub) <= pNum)
        {
            ++answer;
        }
    }

    return answer;
}
