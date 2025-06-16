#include <string>
#include <vector>
#include <algorithm> 
#include <utility>   

using namespace std;

vector<int> solution(vector<int> emergency)
{
    vector<int> answer(emergency.size());
    vector<pair<int, int>> indexed_emergency;
    
    for (int i = 0; i < emergency.size(); ++i) 
    {
        indexed_emergency.push_back({emergency[i], i});
    }

 
    sort
    (
        indexed_emergency.begin(), indexed_emergency.end(), 
        [](pair<int, int> a, pair<int, int> b)
        {return a.first > b.first;}
    );

    for (int i = 0; i < indexed_emergency.size(); ++i) 
    {
        int rank = i + 1;
        int original_index = indexed_emergency[i].second;
        answer[original_index] = rank;
    }

    return answer;
}
