#include <string>
#include <vector>
using namespace std;

int Collatz(long long Num, long long Count)
{
    if(Count >= 500){return -1;}
    if(1 == Num){return Count;}
        
    if(0==Num%2){Num=Num/2;}
    else{Num=(Num*3)+1;}

    return Collatz(Num,Count+1);
}

int solution(int Num) 
{
    if(1 == Num) {return 0;}    
    int Result = Collatz(Num, 0);
    return Result;
}