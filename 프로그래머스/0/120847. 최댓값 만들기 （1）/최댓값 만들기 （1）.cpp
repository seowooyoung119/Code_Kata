#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) 
{
    sort(numbers.begin(),numbers.end());
    int i = numbers.size();
    return (numbers[i-1] * numbers[i-2]);


}