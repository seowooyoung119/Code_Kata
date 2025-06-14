#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
    int num =1;
    vector<int> answer;
    answer.push_back(1);
 
    if (1!=n&1){n=n-1;}
    
    for(int i=0; i < (n/2); ++i)
    {
        num = num +2; 
        answer.push_back(num);
    }
    
    return answer;
}