#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    if (arr.size() <= 1) return {-1};
    
    vector<int>answer = arr;
    answer.erase(min_element(answer.begin(), answer.end()));
    return answer;
}