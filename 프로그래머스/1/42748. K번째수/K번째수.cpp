#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{     
    vector<int> answer;
    
    for(auto command : commands)
    {
        int i = (command[0] - 1); 
        int j = (command[1] - 1);  
        int k = (command[2] - 1); 
        
        vector<int> Make_array (array.begin()+i, array.begin()+j+1);
        
        sort(Make_array.begin(), Make_array.end());
        
        answer.push_back(Make_array[k]);
    }
    return answer;
}