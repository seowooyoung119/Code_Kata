#include <string>
#include <cstring>
#include <vector>

using namespace std;

int solution(string str1, string str2) 
{
    if (string::npos != str1.find(str2))return 1;
    else return 2;
}