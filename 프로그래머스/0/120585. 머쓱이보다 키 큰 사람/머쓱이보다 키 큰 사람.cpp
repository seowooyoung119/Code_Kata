#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int height) 
{
    int answer = 0;
    sort(array.begin(),array.end());
    reverse(array.begin(),array.end());
    
    for(int i=0; i < array.size(); ++i)
    {
        if(height < array[i])
        {
            ++answer;
        }
        
        else
        {
            break;
        }

    }
    
    return answer;
}