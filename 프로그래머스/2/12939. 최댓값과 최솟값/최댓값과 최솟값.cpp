#include <string>
#include <sstream>  
#include <climits>

using namespace std;

string solution(string s) 
{
    stringstream ss(s);
    int num;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

  
    while (ss >> num) 
    {
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }

    return to_string(minVal) + " " + to_string(maxVal);
}
