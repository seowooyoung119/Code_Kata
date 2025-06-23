long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long num = 0;
    for(long long i=1; i<=count; ++i)
    {
        num+= (long long)price *i; 
    }
    
    answer = (long long)num - money;
    
    if(answer<0)
    {
        return 0;
     }
    
    return answer;
}