#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;
    
    for(auto command : commands)
    {
        int i = command[0]-1;
        int j = command[1];
        int k = command[2]-1;
    
        vector<int> Make_Array(array.begin()+i,array.begin()+j);
        
        sort(Make_Array.begin(), Make_Array.end());
        
        answer.push_back(Make_Array[k]);
    }
    return answer;
}