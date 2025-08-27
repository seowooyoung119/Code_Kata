#include <string>
#include <cctype>

using namespace std;

string solution(string s) 
{
    string answer = "";
    bool newWord = true; 

    for (char c : s) 
    {
        if (c == ' ') 
        {
            answer += c;
            newWord = true;
        } 
        else 
        {
            if (newWord) 
            {
               
                if (isalpha(c))
                {
                    answer += toupper(c);
                }
                else
                {
                    answer += c;
                }
                newWord = false;
            }
            else
            {
                if (isalpha(c))
                {
                    answer += tolower(c);
                }
                else
                {
                    answer += c; 
                }
            }
        }
    }
    return answer;
}
