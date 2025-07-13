#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) 
{
    vector<int> Month = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> Week = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int Day = b;
    
    for(int i =1; i < a; ++i)
    {
        Day += Month[i];
    }
    
    Day = (Day-1) % 7;
    
    
    return Week[Day];
}