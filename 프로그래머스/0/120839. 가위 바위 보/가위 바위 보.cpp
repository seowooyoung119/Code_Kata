#include <string>
#include <vector>

using namespace std;

string solution(string rsp) 
{
    string answer = "";
    int num =0;
    
    for(int i=0; i<rsp.size(); ++i)
    {
        num = u_char(rsp[i])-'0';
        switch(num)
        {
            case 0 :
                answer +='5';
                break;
            case 2 :
                answer +='0';
                break;
            case 5 :
                answer +='2';
                break;
        }    
    }
    return answer;
}


