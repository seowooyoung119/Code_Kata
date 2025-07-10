#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    bool answer = true;
    int Sum = 0;
    
    string Num = to_string(x);
    
    for(int i=0; i<Num.size(); ++i)
    {
        Sum = Sum + (Num[i]-48);
    }
    
    0==(x%Sum)? answer = true : answer = false;
        
    return answer;
}