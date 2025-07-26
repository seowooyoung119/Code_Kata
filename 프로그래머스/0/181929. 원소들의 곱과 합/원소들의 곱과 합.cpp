#include <vector>
#include <numeric>
#include <functional>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) 
{
    int mult = accumulate(num_list.begin(),num_list.end(),1,multiplies<int>());
    int plus = accumulate(num_list.begin(),num_list.end(),0);
    
    return mult < pow(plus,2) ? 1 : 0;  
}