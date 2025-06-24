#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    /*예외처리*/
    if(arr1.size() != arr2.size())
    {
     cerr << "SIZE_ERROR" << endl;
    }
    
    vector<vector<int>> answer(arr1.size()); // 미리 공간확보
    
    if(arr1.size()==arr2.size())
    {       
        for(int i=0; i<arr1.size(); ++i) // 합산 후 삽입 루프
        {  
            for(int j=0; j<arr1[i].size(); ++j)
            answer[i].push_back(arr1[i][j]+arr2[i][j]);
        }
    }
    return answer;
}