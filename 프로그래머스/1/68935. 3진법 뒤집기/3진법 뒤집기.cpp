#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n)
{
    int Answer = 0;
    int TenNum = 0;
    int Count=0;
    string ThreeNum ="";
    
    while(0 < n)
    {
        ThreeNum += to_string(n%3); 
        n /= 3;
    }
    
    for(char Count : ThreeNum)
    {
        TenNum = TenNum * 3 + (Count - '0');
    }
  
    return Answer = TenNum;
}
