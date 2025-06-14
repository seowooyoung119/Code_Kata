#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int Need_Piza = 0;
    
    if(n<=7)
    {
        answer = 1;
        return answer;
    }

    else if(7<n && n<=100)
    {
        Need_Piza = n/7;
        if(0 != (n%7)) {++Need_Piza;}
        answer = Need_Piza;
    }
    
    return answer;
}