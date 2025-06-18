#include <string>

using namespace std;

string solution(string phone_number) 
{
    string answer ="";
    answer.append(phone_number.length()-4,'*');
    answer.append(phone_number,phone_number.length()-4,phone_number.length());

    return answer;
}