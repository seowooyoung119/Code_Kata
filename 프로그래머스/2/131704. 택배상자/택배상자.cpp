#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) 
{
    stack<int> sub; 
    int n = order.size();
    int index = 0;  
    
    
    for (int box = 1; box <= n; box++)
    {
        sub.push(box);
        
        
        while (!sub.empty() && sub.top() == order[index]) 
        {
            sub.pop();
            index++;  
        }
    }
    
  
    return index;
}
