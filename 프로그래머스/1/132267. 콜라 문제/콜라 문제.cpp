#include <string>
#include <vector>
using namespace std;
int solution(int a, int b, int n) 
{
    int answer = 0;
    
    while(n >= a)
    {
        int newCola = (n/a) * b;  // 받을 수 있는 콜라 개수
        answer += newCola;
        n = n%a + newCola;        // 남은 빈 병 + 새로 생긴 빈 병
    }
    
    return answer;
}