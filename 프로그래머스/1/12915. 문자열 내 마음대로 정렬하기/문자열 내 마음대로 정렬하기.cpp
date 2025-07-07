#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) 
{    
    // 정렬 함수, 처음부터 끝까지 진행
    sort(strings.begin(),strings.end(), [n](const string& first, const string& second)
                                        //람다 함수 : 첫 번째 문자와 두 번째 문자 비교
    {
        return (first[n] == second[n] ? first < second : first[n] < second[n]);
        // n번째 문자 같으면 사전 순으로 비교
        // n번째 문자 다르면 n번째 문자로 비교
    });

    return strings;
}