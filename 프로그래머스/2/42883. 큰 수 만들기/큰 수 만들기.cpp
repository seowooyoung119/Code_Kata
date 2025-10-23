#include <string>
#include <vector>
using namespace std;

string solution(string number, int k)
{
    string stack = "";
    
    for (char num : number)
    {
       
        while (!stack.empty() && k > 0 && stack.back() < num) 
        {
            stack.pop_back();
            k--;
        }
        stack.push_back(num);
    }
    

    if (k > 0)
    {
        stack.erase(stack.size() - k);
    }
    
    return stack;
}
