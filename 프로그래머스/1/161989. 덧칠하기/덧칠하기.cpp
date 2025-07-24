#include <vector>

using std::vector;

int solution(int n, int m, vector<int> section) 
{
    int Count = 0;
    int i = 0;
    
    while(i < section.size())
    {
        int Start_Section = section[i];
        int End_Range = Start_Section + m -1;
        
        while(i < section.size() && section[i] <= End_Range)
        {
            ++i;
        }
        
        ++Count;
    }
    
    return Count;

}