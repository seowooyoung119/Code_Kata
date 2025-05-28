#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while(true)
    {
        int number = 0;
        
        if(n < 10)
        {
            number = n;
            answer += number;
            cout << number;
            break;
        }
        
        else
        {
            number = n%10;
            answer += number;
            cout << number << "+";
            n = n /10;
        }  
        
}
        
    cout << "=" << answer << endl;

    return answer;
}