#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    string Num = to_string(n);
    
    sort(Num.begin(),Num.end());
    reverse(Num.begin(),Num.end());
    
    answer = stoll(Num);
    
    return answer;
}