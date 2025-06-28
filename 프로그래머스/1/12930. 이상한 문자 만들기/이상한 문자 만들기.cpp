#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    int Dex =0;
    
    for(int i=0; i<s.length(); ++i)
    {
        if(' ' == s[i])
        {
            answer += ' ';
            Dex = 0;
        }
        
        else if(Dex % 2 == 0) // 짝수
        {
            answer += toupper(s[i]);
            ++Dex;
        }

        else // 앞의 둘다 아니면 다 홀수.
        {
            answer += tolower(s[i]);
            ++Dex;       
        }   
    }
    return answer;
}