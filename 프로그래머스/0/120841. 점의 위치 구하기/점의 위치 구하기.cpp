#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) 
{
    int answer = 0;
    int x = 0;
    int y = 0;
    
    dot[0]>0? x=1: x=-1;
    dot[1]>0? y=1: y=-2;
    
    if(x>0 && y>0)return 1;
    else if(x>0 && y<0)return 4;
    
    if(x<0 && y>0)return 2;
    else if(x<0 && y<0)return 3;
}