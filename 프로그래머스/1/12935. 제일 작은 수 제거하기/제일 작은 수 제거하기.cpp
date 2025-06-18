#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    if (1 >= arr.size()) return {-1};
    
    vector<int> answer;
    int minValue = *min_element(arr.begin(), arr.end());
    
     for (int num : arr) 
     {
        if (num != minValue)
        answer.push_back(num);
    }
    
    return answer;
}