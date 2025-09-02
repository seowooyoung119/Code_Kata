#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) 
{
    vector<int> answer;
    
    // 전체 격자의 수
    int total = brown + yellow;
    
    // w : 가로(너비)의 길이
    // h : 세로(높이)의 길이
    for(int w = 1; w < total; ++w)
    {
        // 전체 격자의 수 = w x h 즉, 0으로 나누어 떨저야 한다.
        if(total % w != 0) continue;
        
        // 전체 격자의 수 = w x h 
        // 전체 격자의 / w = h
        int h = total / w;
        
        // 테투리르 제외한 가로 세로 노란색 영역이 같으면 정답 -> 탈출
        if((w-2)*(h-2) == yellow) 
        {
            answer.push_back(h);
            answer.push_back(w);
            break;
        }
    }
    return answer;
}