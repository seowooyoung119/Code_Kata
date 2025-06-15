#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    string answer = "";
    
    for(auto c : my_string) 
    {
        answer.append(n,c);   
    }
    
    return answer;
}