#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> answer, check(3,0);
    
    vector<int> St_1 = {1,2,3,4,5};
    vector<int> St_2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> St_3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for(int i = 0; i < answers.size(); ++i)
    {
        if(St_1[i % St_1.size()] == answers[i]) ++check[0];
        if(St_2[i % St_2.size()] == answers[i]) ++check[1];
        if(St_3[i % St_3.size()] == answers[i]) ++check[2];   
    }
    
    int max = *max_element(check.begin(), check.end());
    
    for(int i = 0; i <=2; ++i)
    {
        if(max == check[i]) answer.push_back(i+1);
    }
    
    return answer;
}