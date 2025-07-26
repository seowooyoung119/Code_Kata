#include <vector>

using std::vector;

vector<int> solution(vector<int> arr) 
{
    for(auto& a : arr)
    {
        if(50 <= a && 0 == a%2)
        {
            a /= 2;
        }
        else if (50 >= a && 0 != a%2)
        {
            a *= 2;
        }
    }
        
    return arr;
}