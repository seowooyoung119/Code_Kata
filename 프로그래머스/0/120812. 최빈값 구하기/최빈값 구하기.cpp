#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> array)
{
    int MaxFrequency = 0; // 최대 등장 횟수
    int Num = -1;         // 최빈값 (가장 많이 등장한 숫자)
    int CountOfNum = 0;   // 최대 등장 횟수를 가진 숫자의 개수 (최빈값 후보 개수)

    unordered_map<int,int> freq_map;

    // 1. 배열의 각 요소에 대해 등장 횟수를 카운트합니다.
    for(int num : array)
    {
        ++freq_map[num];
    }

    // 2. map을 순회하며 최대 등장 횟수와 최빈값을 찾습니다.
    for(auto it = freq_map.begin(); it != freq_map.end(); ++it)
    {
        if(it->second > MaxFrequency)
        {
            MaxFrequency = it->second;  // 최대 등장 횟수를 업데이트합니다.
            Num = it->first;            // 해당 숫자를 최빈값으로 기록합니다.
            CountOfNum = 1;             // 최빈값 후보 개수를 1로 초기화합니다.
        }
        // 현재 숫자의 등장 횟수가 MaxFrequency와 동일하다면
        else if(it->second == MaxFrequency)
        {
            ++CountOfNum;           // 최빈값 후보가 여러 개임을 표시합니다.
        }
    }

    // 3. 최빈값이 여러 개인지 확인하고 결과를 반환합니다.
    if (CountOfNum > 1) 
    {
        return -1; // 최빈값이 여러 개이면 -1 반환
    } 
    else 
    {
        return Num; // 유일한 최빈값 반환
    }
}
