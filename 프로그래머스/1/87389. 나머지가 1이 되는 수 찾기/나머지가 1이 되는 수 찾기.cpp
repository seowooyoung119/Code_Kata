#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 2;
    
    
    while(true) 
    {
        if(1 == n % answer) 
        {return answer;}
        
        else ++answer;
    }
}
