#include <string>
using namespace std;

bool solution(string s) 
{
    if(4==s.length() || 6==s.length())
    {
        for (int i = 0; i < s.length(); ++i)
        {
            if (!isdigit(s[i]))
            return false;
        }
        return true;
    }
    else
    {
        return false;
    }
}
