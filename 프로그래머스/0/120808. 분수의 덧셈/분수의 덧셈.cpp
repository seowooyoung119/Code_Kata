#include <string>
#include <vector>
#include <numeric>
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) 
{
    vector<int> answer;
    
    // 최소공배수
    int l = lcm(denom1, denom2);
    
    // 분자 계산
    int new_numer1 = numer1 * (l / denom1);
    int new_numer2 = numer2 * (l / denom2);
    int result_numer = new_numer1 + new_numer2;
    
    // 기약분수로 만들기
    int g = gcd(result_numer, l);
    
    answer.push_back(result_numer / g);
    answer.push_back(l / g);
    
    return answer;
}