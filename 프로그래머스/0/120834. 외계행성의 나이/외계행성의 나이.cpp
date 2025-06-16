#include <string>
#include <vector>

using namespace std;

string solution(int age) 
{
    string answer = ""; 
    string lookup_table = "abcdefghij";
    string age_str = to_string(age);

    for (char digit_char : age_str) 
    {
        int i = digit_char - '0';
        char alphabet_char = lookup_table[i];
        answer += alphabet_char;
    }
    return answer;
}