#include <string>
#include <vector>
#include <iostream>

using std::vector;    

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    vector<vector<int>> answer(arr1.size());
    
        for(int i = 0; i < arr1.size(); ++i)
        {  
            size_t cols = arr1[i].size();
            
            answer[i].reserve(cols);
            
            for(int j = 0; j < arr1[i].size(); ++j)
            
            answer[i].push_back(arr1[i][j]+arr2[i][j]);
        }
    
    return answer;
}