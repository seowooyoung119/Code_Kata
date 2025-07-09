핵심 아이디어 : 

1. unordered_map<char, int>를 사용하여 각 문자의 마지막 등장 위치를 저장합니다
2. 문자열을 순회하면서 현재 문자가 이전에 등장했는지 확인합니다
3. 이전에 등장했다면 현재 위치 - 이전 위치로 거리를 계산합니다
4. 처음 등장하는 문자라면 - 1을 저장합니다
5. 현재 문자의 위치를 맵에 업데이트합니다

결과 : 
시간 복잡도 : O(n), 공간 복잡도 : O(1) (최대 26개의 소문자만 저장)



#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer; // 정답을 위한 배열
    unordered_map<char, int> lastIndex; // 각 문자의 마지막 등장 위치 저장

    for (int i = 0; i < s.length(); ++i) // 문자열 처음부터 끝까지 돌린다.
    {
        char currentChar = s[i];

        // 현재 문자가 이전에 등장했는지 확인
        if (lastIndex.find(currentChar) != lastIndex.end()) 
        {
            // 이전에 등장했다면 거리 계산 (현재 위치 - 이전 위치)
            int distance = i - lastIndex[currentChar];
            answer.push_back(distance);
        }
        else 
        {
            // 처음 등장하는 문자라면 -1
            answer.push_back(-1);
        }

        // 현재 문자의 위치를 업데이트
        lastIndex[currentChar] = i;
    }

    return answer;
}

// 알게 된 함수들 //

vector<pair<typename1, typename2>>
comapare()
.find() // unordered_map
.end() // unoredered_map
.count() //  unoredered_map
.contains() //  unoredered_map C++20 이상

