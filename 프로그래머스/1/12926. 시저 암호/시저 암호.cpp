#include <string>
#include <cctype>

std::string solution(std::string s, int n) 
{
    for (char &c : s) 
    {
        if (std::isupper(c)) c = 'A' + (c - 'A' + n) % 26;
        else if (std::islower(c)) c = 'a' + (c - 'a' + n) % 26;
    }
    return s;
}
