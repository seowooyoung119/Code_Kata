#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) 
{
    vector<int> Answer;
    string Num = to_string(n);
    reverse(Num.begin(),Num.end());
    for(int i=0; i < Num.size(); ++i)
    {
        Answer.push_back(Num[i]-48);
    }
    
    return Answer;
}