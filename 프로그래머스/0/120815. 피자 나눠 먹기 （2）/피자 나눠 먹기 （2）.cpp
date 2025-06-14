#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int Need_Piza = lcm(n,6)/6;
    answer = Need_Piza; 
    return answer;
}