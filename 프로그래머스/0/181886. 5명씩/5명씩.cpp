#include <string>
#include <vector>
#include <algorithm>

using namespace std;


vector<string> solution(vector<string> names) 
{       
    int Idx = -1;
    vector<string> answer;
    
    copy_if(names.begin(), names.end(), back_inserter(answer), [&Idx](string name){++Idx; return Idx%5 ==0;});
        
    return answer;
}