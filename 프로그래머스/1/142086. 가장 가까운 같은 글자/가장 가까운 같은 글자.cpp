#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    vector<pair<char, int>> compares;  // char로 저장
    
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
                break;  // break;
            }
        }
        
        if (!found) 
        {  // 못 찾았을 때만
            answer.push_back(-1);
            compares.push_back({s[i], i});
        }
    }
    return answer;
}