#include <string>

int solution(std::string t, std::string p) 
{
    const int pLen = p.size();
    const int tLen = t.size();
    const long long pNum = std::stoll(p);

    // 람다: 주어진 위치에서 p 길이만큼 잘라 숫자로 변환
    auto getSubNum = [&](int idx) -> long long {return std::stoll(t.substr(idx, pLen));};

    // 람다: 반복 길이 계산
    auto loopRange = [&]() -> int {return tLen - pLen + 1;};

    // 인라인 스타일 람다: 조건 비교
    auto isValid = [&](int idx) -> bool {return getSubNum(idx) <= pNum;};

    // 최종 집계
    int count = 0;
    for (int i = 0; i < loopRange(); ++i)if (isValid(i)) count++;
    
    return count;
}
