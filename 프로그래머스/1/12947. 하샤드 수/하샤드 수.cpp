#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    string StrX = to_string(x);
    int SubNum = 0;
        
    for(auto Num : StrX)
    {
        SubNum += static_cast<int>(Num - '0');
    }
    
     return (0 == x % SubNum);
}