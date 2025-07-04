#include <string>
#include <regex>

int solution(std::string s) 
{
    std::vector<std::string> Eng = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::vector<std::string> Num = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
        
    for(int i = 0; i < Eng.size(); ++i)
    {
        s = std::regex_replace(s, std::regex(Eng[i]), Num[i]);

    }
    
    return stoi(s);



}