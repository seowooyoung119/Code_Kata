#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    string Num = to_string(n);
    int answer = 0;
    
    for(int i =0; i < Num.size(); ++i)
    {
        answer +=Num[i]-48;
    }
        return answer;
}
