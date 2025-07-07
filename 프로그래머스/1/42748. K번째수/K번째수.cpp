#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{     
    vector<int> answer;
    
    for(auto command : commands)
    {
        int i = command[0] - 1;  // 1-based를 0-based로 변환
        int j = command[1] - 1;  // 1-based를 0-based로 변환  
        int k = command[2] - 1;  // 1-based를 0-based로 변환
        
        // i번째부터 j번째까지 자르기 (기존 방식)
        vector<int> temp(array.begin() + i, array.begin() + j + 1);
        
        sort(temp.begin(), temp.end());
        
        answer.push_back(temp[k]);
    }
    return answer;
}