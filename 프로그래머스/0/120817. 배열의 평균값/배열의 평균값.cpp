#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) 
{
    double answer = 0;
    int PlusNum = 0;
    int AvrNum = numbers.size();
    
    for(int i =0; i<AvrNum; ++i)
    {
        PlusNum += numbers[i];
    }
    
    answer = (double)PlusNum/AvrNum;
    
    return answer;
}