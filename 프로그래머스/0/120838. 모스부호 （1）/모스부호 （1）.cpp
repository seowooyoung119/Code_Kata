#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string letter) 
{
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string answer = "";
    
    stringstream ss(letter);
    string morseCode;
    
    while (ss >> morseCode) 
    {
        auto it = find(morse.begin(), morse.end(), morseCode);
        if (it != morse.end()) 
        {
            int index = distance(morse.begin(), it);
            answer += ('a' + index);
        }
    }
    
    return answer;
}