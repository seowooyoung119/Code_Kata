#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    int count = 0;
    int i = 0;
    
    while(i < s.length())
    {              
        char a = s[i];
        int a_num = 0;
        int other_num = 0;
   
        for(int j = i; j < s.length(); ++j)
        {
            if(a == s[j]) ++a_num;
            else ++other_num;
            if(a_num == other_num) {i = j+1; break;}
        }
        
        if (a_num != other_num) i = s.length();
            
        ++count;
    }
    
    return count;
}