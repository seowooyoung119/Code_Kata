#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    int n = arr1.size();       
    int m = arr1[0].size();     
    int k = arr2[0].size();     
    
    vector<vector<int>> answer(n, vector<int>(k, 0));
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < k; j++) 
        {
            for (int x = 0; x < m; x++) 
            {
                answer[i][j] += arr1[i][x] * arr2[x][j];
            }
        }
    }
    
    return answer;
}
