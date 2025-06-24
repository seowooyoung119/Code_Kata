#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    /*예외처리*/
    if(arr1.size() != arr2.size())
    {
        cerr << "VECTOR BIG SIZE_ERROR" << endl;
        return {};
    }
    else if(arr1[0].size() != arr2[0].size())
    {
        cerr << "VECTOR SMALL SIZE_ERROR" << endl;
    }
    
    vector<vector<int>> answer(arr1.size()); // 미리 공간확보 백터의 행 
    
    if(arr1.size()==arr2.size())
    {     
        
        for(int i=0; i<arr1.size(); ++i) // 합산 후 삽입 루프
        {  
            size_t cols = arr1[i].size(); // 미리 공간 확보 백터의 열
            answer[i].reserve(cols);
            
            for(int j=0; j<arr1[i].size(); ++j)
            answer[i].push_back(arr1[i][j]+arr2[i][j]);
        }
    }
    return answer;
}