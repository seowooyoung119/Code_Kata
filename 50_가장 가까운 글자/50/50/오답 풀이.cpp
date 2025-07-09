당신의 의사 코드를 보면 핵심 아이디어는 거의 정답에 다가가 있었습니다!
당신이 맞게 생각한 부분들 :

✅ 각 문자의 위치를 저장하는 배열(compares) 필요
✅ 문자열을 순회하면서 이전에 나온 같은 문자 찾기
✅ 없으면 - 1, 있으면 거리 계산
✅ 최신 위치로 업데이트하는 아이디어

문제가 된 부분들 :

당신 코드의 문제점들
answer.push_back(compares[j].second - i);  // ❌ 음수가 됨 (i - compares[j].second 이어야 함)
continue;  // ❌ 아래 코드도 실행됨
answer.push_back(-1);  // ❌ 위에서 continue했는데도 실행됨
compares.push_back({ s[i], i });  // ❌ 중복 생성

//=======================================================//
// 문제점 개션 //
//=======================================================//

include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    vector<pair<char, int>> compares;  // char를 저장해야 함

    for (int i = 0; i < s.length(); ++i) 
    {
        bool found = false;

        for (int j = 0; j < compares.size(); ++j) 
        {
            if (compares[j].first == s[i]) 
            {
                answer.push_back(i - compares[j].second);  // 순서 바꿈
                compares[j].second = i;  // 위치만 업데이트
                found = true;
                break;  // continue 대신 break
            }
        }

        if (!found) 
        {  // 못 찾았을 때만
            answer.push_back(-1);
            compares.push_back({ s[i], i });
        }
    }
    return answer;
}